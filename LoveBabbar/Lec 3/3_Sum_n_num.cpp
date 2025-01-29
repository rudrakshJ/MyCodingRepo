#include <iostream>
using namespace std;

int main(){
    int a, i = 1, j = 1, sum = 0, sum_even = 0; 

    // It is important to initialize sum as 0 otherwise it stores garbage value
    cin >> a;

    while (i <= a)
    {
        sum += i;
        i ++;
    }

    //TO calulate sum of first n even numbers :
    while (j <= a)
    {
        sum_even += 2*j;
        j ++;
    }
    


    cout << sum << endl;
    cout << sum_even << endl;

    return 0;
}
