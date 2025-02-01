#include <iostream>
#include <cmath>
using namespace std;
//Earlier when round() is not used inside isArmstrong() {COMMENTED AT THAT PLACE}
//This function is correct but dont know why it is causing errors
//The error an my machiene is that particularly for 153, 
//in the second iteration of while loop ans comes as 151 rather than 152
//Dont know why. But this code retuns true on online compilers ???

/*****************PROBLEM IDENTIFIED******************/
/*
Earlier the reason for error in case of input = 153 was: 
In second iteration , sum comes out to be 151 in place of 152(3^3 + 5^3)
The reason identified is that pow() return double number which result in tiny 
precision error i.e. it returns 124.99999999... in place of 125

When added to 27, it results in 151.99999999... this is then stored in a integer
which causes it to get truncated and result in 151 as answer. 
This can be solved by rounding 151.99999999 using round() function as done below

*/

/*
Why only 5^3 caused error and not 3^3 ??

Precision errors with pow() can occur due to:
    The inherent limitations of floating-point representation.
    The magnitude of numbers involved in calculations.
    The accumulation of rounding errors during multiple multiplications.
While smaller bases like 3, they may not exhibit noticeable precision issues when 
raised to powers however larger bases like 5 can lead to more significant discrepancies 
due to how floating-point arithmetic works in practice.

This could be solved by writing our own power calculating function as done below.
*/





bool isArmstrong(int n)
{
    int n1 = n, n2 = n;
    int num_digits = 0;

    while (n1 != 0)
    {
        n1 = n1/10;
        num_digits++;
    }
    
    
    int digit = 0;
    int ans = 0;
    while (n2 != 0)
    {
        digit = n2%10;
        n2 = n2/10;
        cout << pow(digit, num_digits) << endl;
        ans = ans + round(pow(digit, num_digits)); //Earlier error occured here
        cout << ans << endl;             
    }
    // if (ans == n)
    // {
    //     return true;
    // }
    
    // return false;
    //Better way

    return ans==n;

}


//Second Method :

// Fundtion to calculate x raised to power y(using recursion) 
//This wont cause any error as no floating point numbers are used 
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}

/* Function to calculate number of digits of a number */
int order(int x)
{
    int n = 0;
    while (x) {
        n++;
        x = x / 10;
    }
    return n;
}

// Function to check whether the given 
// number is Armstrong number or not
bool isArmstrong_1(int x)
{
    // Calling order function
    int n = order(x);
    int temp = x, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }

    // If satisfies Armstrong condition
    return (sum == x);
}


//Third Method (using strings)

string armstrong(int n)
{
    string number = to_string(n);

    n = number.length();
    long long output = 0;
    for (char i : number)
        output = output + (long)pow((i - '0'), n);

    //The stoll function below converts string to its number equivalent
    //stoll returns long long integer hence we declare ouput as long long.
    if (output == stoll(number))
        return ("True");
    else
        return ("False");
}



int main()
{
    int input;
    cout << "Enter a number to check if armstrong number : ";
    cin >> input;
    if (isArmstrong(input))
    {
        cout << "Number is Armstrong";
    }
    else
    {
        cout << "Number is not Armstrong";
    }
}