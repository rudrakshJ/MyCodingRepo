#include <iostream>
using namespace std;

int main(){
    char ch;

    cin >> ch;

    int ascii_val = ch;

    if (ascii_val <= 122 && ascii_val >= 97)
    {
        cout << "The character is lowercase alphabet"<<endl;
    }
    else if (ascii_val <= 90 && ascii_val >= 65)
    {
        cout << "The character is uppercase alphabet"<<endl;
    }
    else if (ascii_val <= 57 && ascii_val >= 48)
    {
        cout << "The character is a digit"<<endl;
    }
    else
    {
        cout << "It is sompthing else" <<endl; 
    }
     
    return 0;
}
