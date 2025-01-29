#include <iostream>
using namespace std;

void table(int num, int n){
    for(int i = 1; i <= n; i++)
    {
        cout << num << "x" << i << "=" << num * i << endl;
    }
}

void tableRecur(int num,int n, int i = 1){    
    cout << num << "x" << i << "=" <<num * i << endl;
    if (i ==n)
    {
        return;
    }
    tableRecur(num, n, ++i);
}

int main()
{
    int x, n;
    cout << "Enter the number whose table to print : "<< endl;
    cin >> x;
    cout << "Enter the number till where table to print : "<< endl;
    cin >> n;
    tableRecur(x, n);
    return 0;
}