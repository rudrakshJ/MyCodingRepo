#include <iostream>
using namespace std;

int sumDigit(int n)
{
    int sum = 0;
    int last = -1;
    while (n > 0)
    {
        last = n % 10; //n % 10 gives us last digit of n
        n = n / 10; // It results in last digit of n being stripped off
        //Ex : 47 / 10 => 4(since operation between 2 int is int)
        //Ex : 237 / 10 => 23, etc
        sum += last; //It adds the digits to sum variable one by one
    }    
    return sum;
}

//Sum of digits using recursion
int sumDigitRecur(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    int sum = 0;
    int last = n % 10; 
    n = n / 10; 
    sum = last + sumDigitRecur(n);

    return sum;
}


//Sum of digits using string input
int sumDigitStr(string n)
{
    int i = 0;
    int sum = 0;
    while (i < n.size())
    {
        int digit = n[i] - '0';
        /*
        When two characters are subtracted in C++, the operation is performed
        based on their ASCII values. Characters are treated as integers, and the 
        subtraction yields the difference between their ASCII codes.        
        */

        sum += digit; 
        i++;
    }
    return sum;
    
}



int main()
{
    int n ;
    cin >> n;
    cout << "Sum of digits in " << n << " is : " << sumDigit(n) << endl;
    cout << "Sum of digits in " << n << " is : " << sumDigitRecur(n) << endl;


    string num = "1238759334011123";
    sumDigitStr(num);
    cout << "Sum of digits in " << num << " is : " << sumDigitStr(num) << endl;
    return 0;
}