#include <iostream>
using namespace std;

/*
Pattern 
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y

When input = 5
*/


int main(){
    int n, row = 1;
    cin >> n;
    char ch = 'A';

    int count = 1;

    while (row <= n)
    {
        int col = 1; // this varaible has to be set to 1 after each line is printed
        while (col <= n)
        {
            cout << (char)(ch + count - 1) << " " ; 
            col++;
            count++;
        }
        cout << endl;
        row++;
    }

    return 0;
}