#include <iostream>
using namespace std;

/*
The bitwise operators are :

& - AND
| - OR
~ - NOT
^ - XOR

They act bitwise on the binary representation of number 

Bitwise operation which act on 2 number may cause problem with endl 
To resolve this, write the operation inside the brackets 
OR
Use \n in place of endl for newline for this too we have to write operation inside bracket
But the second way is more preffered.

See in detail about use if endl vs \n  :
endl is a manipulator of ostream class which inserts a newline character and flushes the output
buffer.

Operator Overloading : 
Also interesting fact that here operator overloading is involved i.e. the same operator <<
acts as a bitwise left shift operator as well as insertion operator for cout.


*/


int main(){
    int a = 6, b = 4;

    cout << "a&b" << (a&b) << "\n";
    cout << "a|b" << (a|b) << endl ;
    cout << "~a" << ~a << endl;
    cout << "a^b" << (a^b) << endl;


    return 0;
}
