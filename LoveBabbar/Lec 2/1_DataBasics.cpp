#include <iostream>
using namespace std;

int main(){
    int a = 5;

    char ch = 'a';

    cout << sizeof(ch) << endl;
    cout << sizeof(a) << endl;
    // Size of integer is 4 bytes or 32 bits
    // In binary format 5 is 101
    // Thefore in a space of 32 bits(in memory), it is stored as 000000......000101


    /*
    Similar to integer, we have char whose size is 1 byte or 8 bits, now how does compiler 
    know that data stored at 4 contiguous memory blocks is a single integer or 4 characters.
    (Consider one memory block to be of 8 bits)
    This is done by declaring the datatype   
    */
    return 0;
}
