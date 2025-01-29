#include <bits\stdc++.h>
using namespace std;


//This program checks for number of digits in a given number which divides the number
//They need not be unique.

/*However the following approach is not a good one*/
/*It is to be done later using trees*/
int numberOfDiv(int n, vector<int> &v)
{
    int counter = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (n%v[i]==0)
        {
            counter ++;
        }
    }
    return counter;
}
    
int evenlyDivides(int n) 
{
    vector<int> digit = {} ;
    int number = n;
    int last = 0;
    while(n != 0)
    {
        last = n % 10;
        n = n/10;
            
        if (last != 0)
        {
            digit.push_back(last);
        }
    }
        
    return numberOfDiv(number, digit);
        
}

int main()
{

}