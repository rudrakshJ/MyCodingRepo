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
        
        // Stars decreases down the row i.e. as row increases, star decrases.
        // Also spaces increases down the row
          
        int spaces = row - 1;
        while (spaces) 
        {
            cout << " " << " " ; 
            spaces--;
        }

        int col = 1;
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