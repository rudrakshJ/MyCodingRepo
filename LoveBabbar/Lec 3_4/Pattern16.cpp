#include <iostream>
using namespace std;

/*
Pattern : 
E
D E
C D E
B C D E
A B C D E

when input = 5
*/


int main(){
    int n, row = 1;
    cin >> n;
    
    char ch = 'A';

    while (row <= n)
    {
        int col = 1; // this varaible has to be set to 1 after each line is printed
        while (col <= row)
        {
            // starting character for each row (ch + n - row)
            // Moving along a row, charater increases on the previous by one
            // Hence we can add (col - 1) to first element of each row to get the elment of
            // the columns in a row.
            cout << (char)((ch + n - row) + (col - 1)) << " " ; 
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}