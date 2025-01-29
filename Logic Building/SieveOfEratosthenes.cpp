#include <iostream>
#include <vector>
using namespace std;

/********************SIEVE OF ERATOSTHENES********************/
/*
Method is used to find out primes from 1 to N

ALGO:
1.) We take 1 out of picture since it is not a prime
2.) We start from 2 and from the whole array remove cross out multiples of 2 other than itself 
by setting them to 1
3.) same is repeated for 3, 4, 5, ... till k such that k*k <= n
4.) we print all the numbers other than 1 which will be out primary numbers




*/




//create an array of all natural numbers: 

void set(int *p, int len){
    for (int i = 0; i < len; i++)
    {
        p[i] = i + 1; 
    }
    
}


//this function would convert all non prime numbers to 1

void crossout(int *p, int len){
    int k = 2;//we start from multiples of 2
    //The following loop increments k till k^2 <= length of array()
    while (k * k <= len)
    {
        for (int i = 0; i < len; i++)
        {
            if (p[i] % k == 0 && p[i] != k)
            {
                p[i] = 1;
            }
            
        }
        k++; 
    }
    
}

//In our sieve, all non-prime are given value 1 therefore we only print non unity values here
void printOut(int *p, int len){
    for (int i = 0; i < len; i++)
    {
        if (p[i] != 1)
        {
            cout << p[i] << " ";
        }
        
    }
    cout << endl;
    
}

/*****************FASTER APPROACH FOR THE SIEVE OF ERATOSTHENES******************/

//Problems with above approach : 
/*
1. Nested Loops : (crossOut function)
    In the inner loop we are checking for each of the n elements hence a complexity of O(n)
    And in the outer loops, checking approx root(n) times. Leading to overall complexity of
    O(n root(n)). This is bad than our next approach for which complexity comes out as
    O(nlog(log(n))).

2. Redundant checks : 
    The inner loop checks each element against every candidate prime. 
    This is inefficient because once it is determined that a number is non-prime, 
    there is need to check it again against subsequent primes.
    The Sieve of Eratosthenes(method written below) avoids this redundancy by marking multiples of 
    a prime starting from its square, effectively reducing the number of 
    operations.

3. Memory efficiency : 
    Although both implementations use an array, the Sieve of Eratosthenes(refered to method below) 
    uses a boolean array (or a vector of booleans), which can be more 
    memory-efficient than storing actual numbers and then converting 
    them to 1 for non-primes.

4. Setting Values : 
    In the code, the original values in the array are modified to 1 for non-primes.
    This means that if it is needed to check which numbers are still non-prime later, 
    that information is now lost. 
    The Sieve should keep track of primality without altering the original values.

*/


/*
The code below is much more efficient than the previous methods 
because it deals directly with boolean values.
*/
void sieveOfEratosthenes(int n) {
    // Create a boolean vector and initialize all entries as true
    vector<bool> isPrime(n + 1, true);
    //we made a vector of n + 1 elements because we are considering from 0 to n
    /*
    The advantage of doing so is that the index and the numbers to which the 
    boolean vector refers to have the same value i.e. index of 0 represents the
    number 0 being true or false and so on.
    */
    
    // 0 and 1 are not prime numbers
    isPrime[0] = isPrime[1] = false;

    // Start marking non-primes
    //We are starting from 2 the going till p*p <= n
    for (int p = 2; p * p <= n; p++) {

        /*
        We we encouner a prime p, we are making all its multiples
        starting from p*p as false. These multiples of p are accessed by
        adding p to the index we are reffereing(Since index and the number have 
        same value)  
        */
        if (isPrime[p]) {
            // Mark all multiples of p as non-prime
            // 
            for (int multiple = p * p; multiple <= n; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    // Print all prime numbers
    cout << "Prime numbers up to " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}


/*
Better Practices:
1.)    
    Try to reduce redundancy of checking all numbers, this is done by setting false 
    only those which are multiples this is achieved by incrementing by p in above code

2.) 
    An optimization used in code is that we start to check from  p^2 directly 
    instead of all multiples of p

3.)
    Since we are making a sieve, it is better practice to prevent it from changing 
    the original values as we had done in crossOut() function.

*/



int main()
{
    int size;
    cin >> size;

    int *ptr = NULL;
    ptr = (int*) calloc(size, sizeof(int));

    set(ptr, size);
    crossout(ptr, size);
    printOut(ptr, size);

    int n;
    cout << "Enter the upper limit to find primes: ";
    cin >> n;
    
    sieveOfEratosthenes(n);


    return 0;
}