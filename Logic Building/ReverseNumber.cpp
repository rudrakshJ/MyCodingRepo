#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int num = n, reversed = 0, power = 0;
    int digit = 0;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        reversed = reversed*10 + digit;
    }
    return reversed;    
}

void isPalindrome(int n)
{
    if (n == reverseNumber(n))
    {
        cout << "The number is palindrome.";
    }
    else
    {
        cout << "The number is not a palindrome.";
    }
    
}

int main()
{
    int input;
    cout << "Enter a num to find its reverse : ";
    cin >> input;
    cout<< "Reversed number is : " << reverseNumber(input) << endl;

    isPalindrome(input);
    return 0;
}