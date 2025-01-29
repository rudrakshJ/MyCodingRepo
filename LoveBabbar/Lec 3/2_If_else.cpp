#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    // When we use multiple if's in same indentation, each condition of if statement is checked
    // However in if-elseif-else ladder only one condition can be true therefore only one block
    // is executed(i.e the first one whose condition is true in the order in which program is written)

    if (a > 0)
    {
        cout << "Entered number is +ve" << endl;
    }
    else
    {
        if (a < 0)
        {
            cout << "Entered number is -ve" << endl;
        }
        else
        {
            cout << "Entered number is 0" << endl;
        }
        
    }


    if (a > 0)
    {
        cout << "Entered number is +ve" << endl;
    }
    else if (a < 0)
    {
        cout << "Entered number is -ve" << endl;     
    }
    else
    {
        cout << "Entered number is 0" << endl;
    }
    
    return 0;
}
