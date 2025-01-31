#include <iostream>
#include <utility>
using namespace std;

/*
Important thing to notice here is that containers of C++ stl cant be directly printed 
hence we have to access standard elements(int, float, bool ,string, etc) and print them
*/

int main()
{
    pair<int, int> p1 = {1, 3};// pair between 2 integers
    pair<int, string> p2 = {1, "Hello"};// pair between integer and stirng
    pair<int, float> p3 = {1, 3.56};// pair between integer and float
    pair<bool, int> p4 = {true, 3};// pair between boolean and integers

    //We can also define a pair between an integer and a pair of integers
    pair<int ,pair<int, int>> p5 = {1, {3,7}};

    //Now to access the values of pairs : 
    //pair_name.first ----> gives us first value of pair
    //pair_name.second ----> gives us second value of pair

    cout << "For p1 : ";
    cout << "First element : ";
    cout << p1.first;
    cout << "Second element : ";
    cout << p1.second;

    
    cout << "For p5 : ";
    cout << "First element : ";
    cout << p5.first;

    //It is important to notice here that we cannot directly print pair using cout
    //But we can only print the standard variables.
    //Since p5.second is a pair trying to use cout with it will result in error.
    cout << "first element of second element of pair p5: ";
    cout << p5.second.first;
    cout << "first element of second element of pair p5: ";
    cout << p5.second.first;

    //We can also make an array of pairs as follows :
    pair<int, int> pair_array[3] = {{1,2}, {3,4}, {5,6}};
    //Here the pair {1,2} is at index 0
    //pair {3,4} is at index 1
    //pair {5,6} is at index 2

    cout << "First element at index 1 : " << pair_array[1].first;


}