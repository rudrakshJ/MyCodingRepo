#include <stdio.h>
#include <stdlib.h>

/*
Each node stores data of current element and a pointer to the next structure node. 
*/
typedef struct Node
{
    int DATA;
    struct Node* NEXT;    
} NODE;

/*
We want a function which takes input as data and creates a new node and then returns
a pointer to the newly created node which is structure hence return type is pointer to 
structure. 
Since new node will be created during runtime and we dont want it simply to exist till 
function runs. this would be the case if we crate a simple instance of struct node inside the 
function. It will be allocated on a stack and would disappear once the function ends and its stack 
frame is popped out.
Therefore we use DMA which allocates the memory on heap and will keep it there until the
memory is not deallocated using free() function. Also Linked list is dynamic data structure 
as its size changes frequently. DMA enables such changes without any limits
*/

NODE* createNode(int data)
{
    //We need to create a new instance of stuct using dynamic memory allocation
    NODE* ptr_to_new_structNODE = (NODE*) malloc(sizeof(NODE));
    ptr_to_new_structNODE -> DATA = data;
    ptr_to_new_structNODE -> NEXT = NULL;

    return ptr_to_new_structNODE;
}


//Method to calculate length of list
int list_Length(NODE* start)
{
    int counter = 0;
    NODE* ptr_to_element = start;
    while (ptr_to_element != NULL)
    {
        ptr_to_element = ptr_to_element -> NEXT;
        counter++;
    }
    return counter;
}

/*
Now we want a method to insert node at begining given the address of starting
It would return the address of newly created node
*/
NODE* insertNode_Start(NODE* start,int data)
{
    NODE* ptr_to_new_structNODE;
    if (start == NULL)
    {
        printf("Empty list !! \n");
        printf("Creating a new list.....\n");
        ptr_to_new_structNODE = createNode(data);
        start = ptr_to_new_structNODE;
        return ptr_to_new_structNODE;
    }    

    //We need to create a new node
    ptr_to_new_structNODE = createNode(data);
    //Now we store the address of former start to the next of newly inserted node at begining
    ptr_to_new_structNODE -> NEXT = start;
    
    //Updates address stored in start to the newly created starting node 
    start = ptr_to_new_structNODE;

    return ptr_to_new_structNODE;
}

/*
To insert at end we will have to first travese till end
Then create a new node
Point the former end node to the newlt created node
Return address of newly created end node. 
*/
NODE* insertNode_End(NODE* start,int data)
{
    NODE* ptr_to_new_structNODE;
    if (start == NULL)
    {
        printf("Empty list !! \n");
        printf("Creating a new list.....\n");
        ptr_to_new_structNODE = createNode(data);
        start = ptr_to_new_structNODE;
        return ptr_to_new_structNODE;
    }    

    NODE* ptr_to_element = start;
    //When the loop ends, ptr_to_former_last will point to last node
    //We are traversing through the strucute using the while loop

    // NODE* ptr_to_former_last = NULL;
    // while (ptr_to_element != NULL)
    // {
    //     ptr_to_former_last = ptr_to_element;
    //     ptr_to_element = ptr_to_element -> NEXT;
    // }

    //Better approach than above for traversal
    //At the end of loop, ptr_to_element stores address of last node
    while (ptr_to_element-> NEXT != NULL)
    {
        ptr_to_element = ptr_to_element -> NEXT;
    }    
    

    //We need to create a new node
    ptr_to_new_structNODE = createNode(data);
    //Now we store the address of new end  node inside NEXT offormer end node
    ptr_to_element ->NEXT = ptr_to_element;

    return ptr_to_new_structNODE;
}


//The function accepts position where to insert node, with start node as 1st node 
/*Let us say we have to insert at 4th postion.
We traverse till 3rd position;
Create new node;
Make NEXT of new node to point at the former fourth node utilizing
NEXT of third node;
Make the pointer of 3rd node point to newly created node. 
Finally return pointer to newly created node. 
*/
NODE* insertNode(NODE* start,int position, int data)
{
    //we have to handle this case using the preveiously defined function.
    //The remaining code cannot handle it because it is made so as to insert at nth position
    //by traversing to n-1 th postion which is not possible if n = 1.

    if (position == 1)
    {
        return insertNode_Start(start, data);
    }

    //We have to take (list_Length() + 1) because we can also ask to insert at the end of list
    if (position > (list_Length(start)+1) || position < 1)
    {
        printf("Position entered is INVALID!!\n");
        return NULL;    
    }
    
    
    int position_inidcator = 1;
    NODE* ptr_to_element = start;
    //New node creation
    NODE* ptr_to_new_structNODE;
    ptr_to_new_structNODE = createNode(data); 

    //Loop to traverse till (position-1)th node
    while (position_inidcator < position)
    {
        ptr_to_element = ptr_to_element -> NEXT;
        position_inidcator++;
    }

    //Utilizing NEXT of (position-1) to make new node to point at the former fourth node 
    ptr_to_new_structNODE -> NEXT = ptr_to_element -> NEXT;

    //Making third node to point at newly created fourth node:
    ptr_to_element -> NEXT = ptr_to_new_structNODE;

    return ptr_to_new_structNODE;    
}



NODE* insertNode_improved(NODE* start,int position, int data)
{
    if (position < 0) {
        fprintf(stderr, "Invalid position: %d. Position must be non-negative.\n", position);
        return; // Exit function without inserting
    }

    if (position == 1)
    {
        return insertNode_Start(start, data);
    }
    
    int position_inidcator = 1;
    NODE* ptr_to_element = start;
    //New node creation
    NODE* ptr_to_new_structNODE;
    ptr_to_new_structNODE = createNode(data); 

    //In following manner, we avoid the use of list_Length() function
    for (int i = 0; i < position - 1 && ptr_to_element != NULL; i++) {
        ptr_to_element = ptr_to_element->NEXT;
    }

    if (ptr_to_element == NULL) {
        fprintf(stderr, "Position out of bounds\n");

        //*********Important*********
        free(ptr_to_new_structNODE); // Free allocated memory for the new node
        return NULL;
    }

    //Utilizing NEXT of (position-1) to make new node to point at the former fourth node 
    ptr_to_new_structNODE -> NEXT = ptr_to_element -> NEXT;

    //Making third node to point at newly created fourth node:
    ptr_to_element -> NEXT = ptr_to_new_structNODE;

    return ptr_to_new_structNODE;    
}





//method to print a linkedlist(traversal in a linked list)
void printList(NODE* ptr_to_first_node)
{
    NODE* ptr_to_element = ptr_to_first_node;
    while (ptr_to_element -> NEXT != NULL)
    {
        //prints data stored in node
        printf("%d ", ptr_to_element->DATA);
        //updates pointer to point to the next element of list
        ptr_to_element = ptr_to_element -> NEXT;
    }
    printf("\n");
    
}





int main()
{
    //We want a pointer to point to the first node of linked list
    NODE* START = NULL; // Denotes an empty linked list 
    
    return 0;
}