#include <iostream>
using namespace std;

/*
Pattern :
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
when input = 5
*/


int main(){
    int n, row = 1;
    cin >> n;
    
    char ch = 'A';

    while (row <= n)
    {
        
        // Stars decreases down the row i.e. as row increases, star decrases.
        // Also spaces increases down the row
        int col = 1;
        int spaces = row - 1;
        while (spaces) 
        {
            cout << " " << " " ; 
            spaces--;
            col++; // since we want column number to increase even if space is printed
        }
        
        while (col <= n) 
        {
            cout << col << " " ; 
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}