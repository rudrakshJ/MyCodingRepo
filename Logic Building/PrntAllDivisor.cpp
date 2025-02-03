#include <iostream>
#include <vector>
using namespace std;

void printDivisor_brute(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
    }    
}

/*
We can further optimise the method as follows by making observation:

1 x 36 = 36
2 x 18 = 36
3 x 36 = 36
4 x 18 = 36
6 x 6 = 36
****************
9 x 4 = 36
12 x 3 = 36
18 x 2 = 36
36 x 1 = 36

Beyond the line the divisors are getting repeated
Also for the number i, other divisor will be 36/i
Considering the form a x b = c, 
The divisors are repeated beyond a = b
=> a * a = c => a = root(c)
OR
Repeated when a > b 
OR
Repeated when a exceeds root(number)


1 x 40 = 40
2 x 20 = 40
4 x 10 = 40
5 x 8 = 40
*****************
8 x 5 = 40
10 x 4 = 40
20 x 2 = 40 
40 x 1 = 40





*/




void printDivisor_optimised(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
    }    
}


int main()
{
    printDivisor_brute(36);
    return 0;
}