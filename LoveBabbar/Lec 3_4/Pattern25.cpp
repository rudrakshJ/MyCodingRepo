#include <iostream>
using namespace std;

/*
Pattern :
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
when input = 5
*/

// Here we will have to divide the figure into 4 parts and solve it.

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
            cout << col << " " ; 
            col++;
        }

        while (col <= n) 
        {
            cout << "*" << " " ; 
            col++;
        }

        col = 1;        
        while (col <= (row - 1)) 
        {
            cout << "*" << " " ; 
            col++;
        }
        while (col <= n)
        {
            cout << n - col + 1 << " ";
            col++;
        }


        cout << endl;
        row++;
    }
    return 0;
}