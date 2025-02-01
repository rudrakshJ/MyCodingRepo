//Program to find nth armstrong number : 
#include <iostream>
#include <cmath>
using namespace std;

/*
Our task is to find nth armstorng number but there is not relation between n and the
armstorng number
Approach : We move number by number  till the maximum range of integers
and check for each number whether it is armstrong or not.
If it is amstrong, we increment counter by 1 and if not, we continue.
When the counter becomes = n, the armstrong number we get would be the nth armstorng number.
*/


/*
Here we are going to discuss another way to find number of digits in a number : 
log10(1) = 0
log10(2) = 0.301
log10(3) = 0.4771
.
.
.
log10(10) = 1
.
.
.
log10(99) = 1.9956
log10(100) = 2
.
.
.
log10(999) = 2.999565
log10(1000) = 3

Observation ----> 
Number of digits = (int)(log10(numeber) + 1) 
OR
int digits = log10(numeber) + 1 //Automatically truncates decimal part
*/
bool isArmstrong(int n)
{
    int n1 = n;

    //Instead of using loop, we can directly calculate number of digits as : 
    int num_digits = log10(n) + 1;

    // while (n1 != 0)
    // {
    //     n1 = n1/10;
    //     num_digits++;
    // }   
    
    int digit = 0;
    int ans = 0;
    while (n1 != 0)
    {
        digit = n1%10;
        n1 = n1/10;
        ans = ans + round(pow(digit, num_digits));        
    }
    return ans==n;

}

int nth_Armstrong(int n)
{
    int counter = 0;
    for (int number = 1; number < INT64_MAX; number++)
    {
        if (isArmstrong(number))
        {
            counter++;
        }
        if (counter == n)
        {
            return number;
        }        
        
    }
    

}


int main()
{
    int n;
    cout << "Enter which number of armstrong number to print : " ;
    cin >> n;
    cout << nth_Armstrong(n);
    return 0;
}