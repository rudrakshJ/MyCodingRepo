#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1; // this varaible has to be set to 1 after each line is printed
        while (j <= n)
        {
            cout << i ;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}