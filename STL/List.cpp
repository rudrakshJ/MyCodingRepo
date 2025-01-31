#include <iostream>
#include <list>
using namespace std;
/*
List in c++ STL is a bidirectional linear list which allows for efficient insertiona and 
deletion operations
In arrays, elements are stored in contiguous memory locations. The drawback is that 
if we have to insert or delete a new element at some place, all the other members have to 
be shifted. 
In such a case where insertion and deletion are important and needed to be faster, lists is used. 
Since pointers are used to point to memory location of next member, we need not store it in 
contiguous memory locations.
*/

void displayLst(list<int> &lst)
{
    list<int>::iterator it ;

    for (it = lst.begin();it != lst.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // creates list of 0 length
    list<int> list2(3); //Empty list of size 3

    
    list1.push_back(5);
    list1.push_back(7);
    list1.emplace_back(1);// Similar to push_back
    list1.push_back(9);

    //In a list, push back pushes item from the back
    //5 7 1 9  <--- 12
    //5 7 1 9 12
    list1.push_back(12);
    list1.emplace_back(1);
    list1.push_back(9);

    //In list, push front pushes item from the LHS.
    //5 7 1 9 12
    // 1----> 5 7 1 9 12
    //1 5 7 1 9 12
    list1.push_front(1);
    list1.emplace_front(0);
    //Inserting a first place is possible in vector too but such an operation is very costly


    //Removing elements from list 
    displayLst(list1);
    list1.pop_back(); // removes item from right end
    cout << "Popped from right : ";
    displayLst(list1);

    list1.pop_front(); //removes item from left end
    cout << "Popped from left : ";
    displayLst(list1);

    list<int>::iterator it1 = list1.begin();
    cout << "First element : " << *(it1) << endl; //prints first element of list
    
    
    //Here it is important to note that it1++ is allowed and would move iterator to next
    //element however it1+1 is not allowed(as we could have done with pointer)
    it1++;
    cout <<  "Second element : " << *(it1) << endl;

    it1++;
    cout <<  "Third element : " << *(it1) << endl;


    //Earlier we declared a list of size 3
    //We can input its elements by dereferencing the iterator 
    list<int>::iterator it2 = list2.begin();
    *(it2) = 3;

    it2++;//now it2 points to second element
    *(it2) = 1000;

    it2++;//now it2 points to third element
    *(it2) = 99;

    cout << "list2 : ";
    displayLst(list2);

    //We can sort the list using sort() function
    cout << "Sorted list1 : ";
    list1.sort();
    displayLst(list1);

    //We can also merge two list with merge() method
    //But it requires the two lists to be sorted
    //We will now merge list1 and list2

    //list1 was already sorted
    list2.sort();

    //Now we use the merge method:
    
    list1.merge(list2);
    cout << "Merged List : ";
    displayLst(list1);
    //This would merge list1 and list2 into list1 and in ascending order

    //We can even reverse the list using reverse() method
    list1.reverse();
    cout << "Reversed list1 : ";
    displayLst(list1);  


    /*
    Other methods discussed in vectors such as size(), end(), rend(), rbegin(),
    swap(), clear(), empty(), insert(), front(), back(), etc 
    */
    return 0;
}