#include <iostream>
using namespace std;

int main(){
    /*
    Method to store negative numbers : 
    1) Ignore the -ve sign of number, then write its binary equivalent.
    2)Store the 2's complement in the memory.

    For the case of signed integers, the MOST SIGNIFICANT BIT(MSB) is the one that denotes
    whether an integer in memory is +ve or -ve. If MSB = 1 then negative, if MSB = 0 then positive
    (This results in maximum value of signed integer to be 2^31 - 1 and not 2^32 - 1 )

    How to get 2's complement :
    1) Invert all the bits.(or take 1's complement)
    2) Add the bit 1 to LSB of binary representation. 

    Simply inverting all the bits of binary number is called 1's complement
    

    How to get our number back for printing it from the memory : 
    1) If MSB is 1, take 2's complement of the stored binary number, covert the complement into
    its decimal form and add a -ve sign in front of it and print it as output

    2)Else simply print the decimal form of the stored binary number.




    ##########  Why use 2's complement ##########
    If we dont use 2's complement and simply use MSB to represent +ve or -ve then then two representation
    00000000..000 and 1000000...000 would both represent 0. Wasting 1 binary reresentation. 
    To prevent that we use 2's complement due to which 10000....000 now represents -1 and
    hence the range becomes -(2^31) to 2^31 - 1.

    By default integer is signed.
    
    */
    int a = 5;
    int b = -11;

    unsigned int c = 122;

    unsigned int d = -99; 
    cout  << d;


    /*
    To use unsigned integer, we use keyword unsigned now the range of integer is 0 to 2^32-1
    But if we try to store -ve number here, it would get stored as its 2's complement but 
    during printing, as the integer is unsigned, it is printed as is resulting in a large value
    Since complier thinks it is unsigned.   
    */


    return 0;
}
