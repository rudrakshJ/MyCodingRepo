#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//We can further create the function as a template function which will make our work easier
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> vec1; // used to make a zero length integer vector
    vector<char> vec2; // this is now a character vector

    //Creates 4 element integer vector but if more elements pushed, size would increase
    vector<int> vec3(4); 

    // Below line would create a 4 element vector by copying from vec3
    vector<int> vec4(vec3);

    //Below line would create a vector of length 6 with all elements as 10
    vector<int> vec5(6,10);
    display(vec5);

    // vector_name.size() returns size of vector 
    cout << "The size of vector 5 is : " << vec5.size() << endl;

    vector<int> vec6;

    // vector automatically manages the size since it is dynamic in nature
    
    // to add values to vector, we use push_back() method
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);

    cout << "Vector 1 after pushing : " << endl;
    display(vec1);

    // pop_back() method removes the last element
    vec1.pop_back(); 
    cout << "Vector 1 after popping last element : " << endl;
    display(vec1);

    //In place of push_back(), we can also use the function emplace_back
    //Generally, emplace_back() works faster than push_back()
    vec1.emplace_back(6);
    cout << "Vector 1 after emplace_back() : " << endl;
    display(vec1);

    //Elements of vector can be accessed just like arrays:
    cout << "First Element : " << vec1[0] << endl;
    //Similar to array, their index start from 0

    // we can also use at() method to access elements
    cout << "First Element using at(): " << vec1.at(0) << endl;

    /*
    Now we are going to use the iterator to access variable and for other tasks
    vector<int>:: iterator iter;
    Above statement creates an iterator named iter for the datatype vector<int>
    */

    //An iterator created for vector<int>
    vector<int>::iterator iter1;

    //begin() returns an iterator pointing to first element of the vector
    //which means it returns memory address of the first element
    iter1 = vec1.begin();

    cout <<"Given vector : "<<endl;
    display(vec1);

    // Hence we treat it simply like a pointer and even pointer arithimatic can be used.
    cout << "First element : "<< *(iter1) << endl;

    //Remember that vectors just like arrays are stored in contiguous locations
    iter1++; //Moves iterator to next element just like pointer in array
    cout << "Next element : "<< *(iter1) << endl;

    //Moves iterator to next two position
    iter1 += 2;
    cout << "Second next element after prev one : "<< *(iter1) << endl;


    vector<int>::iterator iter2;

    //The end() method returns a pointer to memory address just after the end of vector
    //And not to the last element of vector 
    iter2 = vec1.end();

    //Hence iter2-- will give us the last element of vec1.
    iter2--; //Now pointing to last element
    cout << "Last element : "<< *(iter2) << endl;


    cout <<"Given vector : "<<endl;
    display(vec1);


    //The following is a reverse iterator : 
    vector<int>::reverse_iterator r_iter1;

    //rbegin() function points to the last element of vector
    //On increment, it moves to left
    //On decrement, it moves to right
    r_iter1 = vec1.rbegin();

    cout << "First element using r_iter1 : "<< *(r_iter1) << endl;

    r_iter1++; 
    cout << "Next element using r_iter1: "<< *(r_iter1) << endl;

    r_iter1 += 2;
    cout << "Second next element after prev one using r_iter1: "<< *(r_iter1) << endl;

    r_iter1--;
    cout << "Moving to previous element using r_iter1: "<< *(r_iter1) << endl;

    //rend() similar to end(),but would return a pointer just before the first element of vector
    //we need to decrement it to print first element

    cout <<"Given vector : "<<endl;
    display(vec1);

    vector<int>::reverse_iterator r_iter2;
    r_iter2 = vec1.rend();


    r_iter2--;

    cout << "First element using r_iter2 : "<< *(r_iter2) << endl;

    r_iter2 -= 2;
    cout << "Second next element after prev one using r_iter2: "<< *(r_iter2) << endl;


    //back method returns the element last position
    cout << "Last element : " << vec1.back()<<endl;

    /************Printing a Vector****************/
    //To print a vector, we can access element of vector just like arrays as done in the above defined display() function

    //Other method is to use iterator

    for (vector<int>::iterator i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *(i) <<" "; //prints value at i
    }
    cout << endl;
    //Now it is tedious to write vector<int>::iterator, instead, we write auto i = vec1.begin()
    
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *(i) <<" "; //prints value at i
    }
    cout << endl;
    /*
    In case of auto keyword, data type is automatically assigned based on the 
    type of values on RHS. 
    ex: in place of int x = 5; we can also write auto x = 5
    Since 5 is integer, it will automatically make x an integer
    auto str = "hello";
    */

    //for each i in vector:
    //Here loop iterates over variables in vector
    //Hence auto here would mean int since vec1 is integer array
    for (auto i : vec1)
    {
        cout << i <<" ";
    }
    cout << endl;

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << "The array v is : ";
    display(v);

    //Removing elements from certain postion, for that we use erase() method
    // It takes input as pointer to the variable
    v.erase(v.begin() + 1);
    //Array becomes : 10 30 40 50
    cout << "After removing second element : ";
    display(v); 
    //Removing a complete slice from vector:

    //To insert elements at certain position, we need to pass the pointer of the location where we want to insert
    //For example to insert at 1st position, we pass v.begin()
    //This would shift all elements from 1st position to right by one place and insert the values
    v.insert(v.begin(), 93); //  Array becomes : 93 10 30 40 50 
    cout << "After inserting second element : ";
    display(v); 

    //It will insert at 4th position from left
    v.insert(v.begin()+3, 100); 
    //Array becomes: 93 10 30 100 40 50
    cout << "After inserting another element at 4th position: ";
    display(v); 

    //To remove a silce of numbers, we can pass start and end pointer
    //In this case elements till just before end pointer is removed
    v.erase(v.begin()+2, v.begin()+4);
    //v.begin()+2 points to 30 and v.begin()+4 points to 40
    //Hence only 30 and 100 is removed, 40 is left out
    cout << "After removing slice : ";
    display(v); //Array : 93 10 40 50 


    vector<int> v1 = {11,25,39};
    cout << "The vector v1 : ";
    display(v1);

    //To insert one vector into another(i.e. v1 into v);
    //First we need to specify position where in v, we want to insert
    //Next we write the begining and end pointer of the vector we want to insert
    v.insert(v.begin()+ 2, v1.begin(), v1.end()); // hence it insert from position 3 from left
    cout << "After inserting v : ";
    display(v);

    //Swapping vector v1 and v
    cout << "Swapping vector v and v1......" << endl;
    v1.swap(v);
    cout << "v : ";
    display(v);
    cout << "v1 : ";
    display(v1);

    //Clearing out a vector : 
    cout << "Clearing out vector v1....." << endl;
    v1.clear();
    cout << "v1 : ";
    display(v1);

    //Returns 1(or ture) if empty otherwise returns 0 (or false).
    cout << "Is v1 empty : " << v1.empty();
    return 0;
}