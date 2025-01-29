#include <iostream>
using namespace std;

/*
Pattern :
        *
      * *
    * * *
  * * * *
* * * * *
when input = 5
*/


int main(){
    int n, row = 1;
    cin >> n;
    
    char ch = 'A';

    while (row <= n)
    {
        int col = 1;   
        int spaces = n - (row);  // tells us the number of spaces needed
        while (col <= spaces) // prints number of spaces
        {
            cout << " " << " " ; 
            col++;
        }    
        while (col <= n) //prints number of stars
        {
            cout << "*" << " " ; 
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/*
Another method :
while (row <= n)
    {
          
        int spaces = n - (row);  // tells us the number of spaces needed
        while (spaces) // prints number of spaces
        {
            cout << " " << " " ; 
            spaces--;
        }    

        int col = 1; 
        while (col <= row) //prints number of stars
        {
            cout << "*" << " " ; 
            col++;
        }
        cout << endl;
        row++;
    }





*/