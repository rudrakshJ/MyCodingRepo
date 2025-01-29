#include <iostream>
using namespace std;
/*
Pattern :
        1
      2 3
    4 5 6
  7 8 9 10
when input = 4 // at input 5, it gets more distorted
*/
int main(){
    int n, row = 1;

    cin >> n;

    int count = 1;
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
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row ++;
    }
    
    return 0;
}
