#include <iostream>
using namespace std;

/*
Pattern :
A
B C
C D E
D E F G
E F G H I

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
            cout << (char)(ch + row + col - 2) << " " ; 
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}