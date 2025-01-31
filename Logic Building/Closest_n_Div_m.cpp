#include <iostream>
using namespace std;

//closest to m, divisible by n 
//My own algorithm : 
int closest_m_divisible_n(int input, int divisor)
{
    bool negative = 0;

    if (input < 0)
    {
        input = -(input);
        negative = 1;
    }

    int quotient = input / divisor;
    int remainder = input % divisor;
    int closestNo;

    if (divisor%2 == 0)
    {
        if (remainder < (divisor/2))
        {
            closestNo = input - remainder;            
        }
        else if (remainder == (divisor/2))
        {
            closestNo = input - remainder + divisor;
            //In this case, both input-remainder and input - remainder + divisor are equally separated
            // But we have to returns larger magnitude number.
        }
        else
        {
            closestNo = input - remainder + divisor;
        }
        
    }
    else
    {
        if (remainder <= (divisor/2))
        {
            closestNo = input - remainder;  
        }
        else
        {
            closestNo = input - remainder + divisor;
        }
        
    }
    
    if (negative == 1)
    {
        return -closestNo;
    }
    else
    {
        return closestNo;
    }
    
}

//following is the improved in below version : 

//Doesnt  deal with divisor = 0
//It is better to use bool variable as false.
//Too much redundancy with ifelse

int closest_m_divisible_n_improved(int input, int divisor) {

    //Further checks for divisor = 0 
    if (divisor == 0) {
        throw std::invalid_argument("Divisor cannot be zero.");
    }

    //Better way to check for negative and convert it to abs value
    bool negative = (input < 0);
    if (negative) {
        input = -input; // Work with absolute value
    }

    int remainder = input % divisor;
    int closestNo;

    // Reduced redundancy in if-else
    if ((divisor%2 == 0 && remainder < divisor / 2)||(divisor%2 != 0 && remainder <= divisor / 2)) 
    {
        closestNo = input - remainder; // Round down
    } 
    else 
    {
        closestNo = input + (divisor - remainder); // Round up
    }

    //Nice improvement here : 
    return negative ? -closestNo : closestNo; // Return result with original sign
}



//Online algorithm: Nice idea 
int closestNumber(int n, int m) {
    // find the quotient
    int q = n / m;
    
    // 1st possible closest number
    int n1 = m * q;
    
    // 2nd possible closest number
    int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
    
    // if true, then n1 is the required closest number
    if (abs(n - n1) < abs(n - n2))
        return n1;
    
    // else n2 is the required closest number    
    return n2;    
}


int main()
{
    int m, n ;
    cout << "Enter m : ";
    cin >> m;
    cout << "Enter n : ";
    cin >> n;
    cout << "closest to m divisible by n : " << closest_m_divisible_n_improved(m,n);
    
    
    return 0;
}