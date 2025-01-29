#include <iostream>
using namespace std;
/*
Pattern :
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
when input = 5
*/
int main(){
    int n, row = 1;

    cin >> n;

    while (row <= n)
    {
        int spaces = n - row;
        while (spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row ++;
    }
    
    return 0;
}
