#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 4;

    /*
    when operation is performed between two same datatype, it results in same datatype.
    This is true for +,-,*,/, etc. 
    Eg : 2/5 results in 0 and not 0.4 since operation between 2 ints should result in int

    However if operation occurs between 2 diff datatype, then datatype of result is the 
    larger one i.e operation between float and int will result into float, operation between 
    double and int results in a double.
    
    By default decimals in c++ are doubles, to consider them as float we can add a f or F at 
    end ot number to denote it as float or use typecastingl
    */
    //Some relational operator : 
    bool boolean1 = (a == b);
    bool boolean2 = (a <= b);

    //Logical operator :
    bool boolean3 = (a == b) || (a <= b);
    bool boolean4 = (a == b) && (a <= b);
    bool boolean5 = !(a >= b);


    return 0;
}
