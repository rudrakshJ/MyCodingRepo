#include <iostream>
using namespace std;

int main()
{
    /*********************NAIVE APPROACH****************/
    int a = 2, b = 3;
    cout << "The value of a : " << a << " and " << "b : " << b << endl;

    int sw = a; // third variable used for swapping
    a = b;
    b = sw;

    cout << "The value of a : " << a << " and " << "b : " << b << endl;




    /*********************FIRST BETTER APPROACH****************/

    //A better approach is using arithimatic operators :

    int c = 10, d = 20;
    cout << "The value of c : " << c << " and " << "d : " << d << endl;
    
    //STEP 1 : 
    c = c + d; // c would now store the sum i.e. 30
    
    //STEP 2 : 
    //d now has 20 and we want to store 10 in it
    //The way out here looks to be d = c - d

    d = c - d; // now d will be storing 30 - 20 i.e. 10

    //Finally we can get 20 inside of c by c - d

    c = c - d;

    cout << "The value of c : " << c << " and " << "d : " << d << endl;




    /*********************SECOND BETTER APPROACH****************/
    // A better and faster approach would be using bitwise operators to swap 
    // This method also does not need the use of a third variable

    // XOR operation between a and b results in lets say c

    //Now XOR of c with a will give us b, and
    //XOR of c with b will give us a 

    //Reason : The following two properties are observer with XOR
    //a ^ a = 0
    //a ^ 0 = a

    int e = 6, f = 5;
    cout << "The value of e : " << e << " and " << "f : " << f << endl;

    e = e ^ f; // e now has 6 ^ 5

    f = e ^ f; // f = (6 ^ 5) ^ 5 = 6

    // now f has 6 hence e = (6^5)^6 = 5
    e = e ^ f;  


    cout << "The value of e : " << e << " and " << "f : " << f << endl;



    // As an additional note, we can also use builtin swap(a,b) function too
    return 0;
}