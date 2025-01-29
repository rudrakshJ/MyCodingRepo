#include <iostream>
using namespace std;

int countDigit(int n)
{
    int counter = 0;
    int last = -1;
    while (n > 0)
    {
        last = n % 10; //n % 10 gives us last digit of n
        n = n / 10; // It results in last digit of n being stripped off
        //Ex : 47 / 10 => 4(since operation between 2 int is int)
        //Ex : 237 / 10 => 23, etc
        counter++; 
    }    
    return counter;
}

int main()
{
    int n ;
    cin >> n;
    cout << "Number of digits in " << n << " is : " << countDigit(n) << endl;
    return 0;
}