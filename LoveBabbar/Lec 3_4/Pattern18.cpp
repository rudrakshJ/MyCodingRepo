#include <iostream>
using namespace std;

/*
Pattern :
* * * * *
* * * *
* * *
* *
*
when input = 5
*/


int main(){
    int n, row = 1;
    cin >> n;
    
    char ch = 'A';

    while (row <= n)
    {
        int col = 1;    
        // Stars decreases down the row i.e. as row increases, star decrases.
        while (col <= (n - row + 1)) 
        {
            cout << "*" << " " ; 
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}