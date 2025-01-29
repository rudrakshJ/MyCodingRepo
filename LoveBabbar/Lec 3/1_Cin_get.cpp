#include <iostream>
using namespace std;

int main(){
    int a;

    a = cin.get();
    /*
    the function takes a single character as input and since a is an integer, it gets typecasted
    to integer.
    Important to note that this function also reads in space(which is also ascii character)
    If we enter 1 2(It has a space in), i.e. we have entered 3 characters, but it will take only
    single character which is the first one i.e. 1 
    This character 1 is not typecasted into its decimal which is 49.

    If we enter a space and hit enter, it takes space as input and returns its decimal value 32

    If we hit enter directly, it reads enter as the character and returns its decimal value
    from ASCII table i.e. 10.
    */

    cout << a << endl;

    return 0;
}
