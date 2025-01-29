#include <iostream>
using namespace std;
/*
Pattern :
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
when input = 5
*/

// this has to be split into 3 parts.
int main(){
    int n, row = 1;

    cin >> n;

    while (row <= n)
    {
        //printing required spaces 
        int spaces = n - row;
        while (spaces)
        {
            cout << " " << " "; 
            spaces--;
        }
        
        //printing the first triangle
        int col = 1;
        while (col <= row) 
        {
            cout << col << " ";
            col++;
        }

        int val = row - 1; 
        //we have to create a varaible separate using row since manipulating row inside next loop
        //will disturb outer loop
        while (val)
        {
            cout << val << " ";
            val--;

        }
        
        cout << endl;
        row ++;
    }
    
    return 0;
}