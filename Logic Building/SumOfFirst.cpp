#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sumRecur(int n)
{
    if (n == 1) 
    {
        return 1;
    }

    return n + sumRecur(n - 1);
}

//However the best approach would be to use the formula for sum of n natural numbers

int betterSum(int n)
{
    int sum = 0;
    //int sum = n * (n + 1) / 2;
    /*There is a problem with above expression for calculating sum since memory over flow would occur
    even before the sum goes out of range because first we are mutiplying n with n+1 which will yeild
    a large number therefore we first divide and then mutiply*/
    
    if (n % 2 == 0)
    {
        sum = (n/2)* (n+1);
    }
    else
    {
        sum = ((n+1)/2)* (n);
    }
    
    
    
    return sum;
}

int main()
{
    int x;
    cout << "Enter the number of natural numbers whose sum to calculate : " <<endl;
    cin >> x;
    cout << "The sum is : " << sumRecur(x);
    return 0;
}