#include <iostream>
using namespace std;

int main(){
    /*
    We know in memory integer is four contiguous memory blocks and char is single memory block 
    of 8 bits. Therefore when intger is typecasted to char, the varaible would pick up the 8 
    LEAST SIGNIFICANT BITS of the integer and get the character equivalent of those bits as 
    stated by ASCII table. (Since the size of char datatype is smaller than int datatype)
    */
    int a = 98;//0b1100010 ---> 0b means binary system is used
    char ch = 98; // would have ASCII equivalent of 1100010 or 98 which is character b
    cout << ch << endl;

    //The reverse is also possible : 
    int b  = 'b'; 
    //In this case the 8 LSB of character becomes LSB of integer and rest bits are 0

    cout << b << endl;
    return 0;
}
