#include <iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin >> n;
    
    //Method 1:
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1 << " ";
            col++;
        }
        cout << endl;
        
        row++;
    }

    //Method 2:
    row = 1; //Reinitialzing variables causes error.

    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        
        row++;
    }
    
    return 0;
}