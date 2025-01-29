#include <iostream>
using namespace std;

bool isEven(int n){
    return n%2==0;
}

/*
If a number is odd then its last bit is always 1 
And we can get last bit of a number by bitwise & on the number with 1. 
Therefore for all even numbers bitwise & on number with 1 will return 0
*/
bool isEvenBin(int n){
    return n&1 == 0;
}

/*
If number is even, as discussed above, last bit is 0 
Hence if we right shift it once and then left shift an even number, we would get same number back
because on left shifting, 0 would be added at rightmost end.
eg: number 12 : 1100
1100 -> right shift : 0110
0110 -> left shift : 1100
*/

bool isEvenBinShift(int n){
    int m = n >> 1;
    m = m << 1;
    return m == n;
}

int main()
{
    int x;
    cin >> x;
    if (isEvenBinShift(x))
    {
        cout << "The entered number is even";
    }
    else
    {
        cout << "The entered number is odd";
    }
    
    
    
    return 0;
}