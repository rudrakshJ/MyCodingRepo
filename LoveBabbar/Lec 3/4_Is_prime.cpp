#include <iostream>
using namespace std;

int main(){
    /*
    To check if a number is prime, it should not be divisible by any number in between 1 and n
    */

    int n, i = 2;
    cin >> n;

    bool isPrime = true;
    
    if (n == 2)
    {
        isPrime = true;
    }
    else if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    
    else
    {
        while (i < n)
        {
            if (n%i==0)
            {
                isPrime = false;
            }
            i++;            
        }
    }
    //we dont need to write separately for the case where n = 0 or n = 1 since isPrime would already be 0
    
    if (isPrime)
    {
        cout << "The number is prime ";
    }
    else
    {
        cout << "The number is not prime";
    }

    
    
    return 0;
}
