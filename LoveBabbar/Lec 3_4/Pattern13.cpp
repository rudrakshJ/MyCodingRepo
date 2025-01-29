#include <iostream>
using namespace std;

/*
Pattern 
A
B B
C C C
D D D D
E E E E E
When input = 5
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
            cout << (char)(ch + row - 1) << " " ;  
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
