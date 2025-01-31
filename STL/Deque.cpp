#include <iostream>
#include <deque>
using namespace std;


/*
*******************POINTS OF DIFFERENCE BETWEEN DEQUE AND LIST OF C++ STL**************
Deque:
    1.)Manages its elements with a dynamic array.
    2.)Provides random access similar to a vector.
    3.)Has an interface that is almost the same as a vector.
    4.)Provides fast insertions and deletions at both the beginning and the end.
    5.)Inserting or deleting elements in the middle is relatively slow because 
    it may require moving elements to fill gaps or make room.
    6.)**Any insertion or deletion of elements other than at the beginning or 
    end invalidates all pointers, references, and iterators that refer to elements of the deque.
List:
    1.)Manages its elements as a doubly linked list.
    2.)Does not provide random access; elements must be accessed sequentially.
    3.)Allows fast insertion and removal of elements at any position, including 
    both ends, due to its linked structure.(Its a doubly linked list)
    4.)Inserting and deleting elements does not invalidate pointers, references,
    and iterators to other elements.

**It means if we use insert function on deque to insert element at any other place
let us say at index = 2. It will result in invalidation of any previously defined 
iterator/pointer/refernce to the deque i.e. if we try to dereference the iterator, 
it may result in indefined behaviour. 

    
*/



void displayDq(deque<int> &dq)
{
    deque<int>::iterator it ;

    for (it = dq.begin();it != dq.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> dq1;
    dq1.push_back(1);
    displayDq(dq1);

    dq1.emplace_back(2);
    displayDq(dq1);

    dq1.push_front(3);
    displayDq(dq1);

    dq1.emplace_front(5);
    displayDq(dq1);

    //Many of the remaining functions work the same way as vectors hence not discussed here.


    // following code depicts the invalidation of pointer
    //in case of inserting in middle of deque
    deque<int> myDeque = {1, 2, 3, 4, 5};
    auto it = myDeque.begin(); 

    myDeque.insert(myDeque.begin() + 2, 10); 
    displayDq(myDeque);
    
    cout << *it << endl; 
    cout << *(++it)<< endl; 
    cout << *(++it) << endl; 
    cout << *(++it) << endl; 
    cout << *(++it) << endl; 
    //PS : Although this program works fine but such things should be avoided as
    //it may lead to faulty code/ program crash,etc.

    return 0;
}