#include <iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin >> n;
    char ch = 'A';

    while (row <= n)
    {
        int col = 1; // this varaible has to be set to 1 after each line is printed
        while (col <= n)
        {
            cout << (char)(ch + row - 1) << " " ; 
            /*
            needs to be typecasted, otherwise it would print ascii values since operation between char and int results in int
            i.e. the larger data type 
            or 
            we can assign the value to a character variable and then print that variable as follows : 
            char prt = ch+ row - 1;
            cout << prt;
            */ 
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
