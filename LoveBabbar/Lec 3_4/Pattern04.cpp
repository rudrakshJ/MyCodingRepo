#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //Method 1:
    int i = 1;
    while (i <= n)
    {
        int j = 1; // this varaible has to be set to 1 after each line is printed
        while (j <= n)
        {
            cout << j + (i - 1)* n << " " ;
            j++;
        }
        cout << endl;
        i++;
    }


    //Method 2 : 
    i = 1;
    while (i <= n * n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            i++;
            j++;
        }
        cout << endl;
    }

    //Method 3 : 
    
    i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    return 0;
}