#include <iostream>
using namespace std;

int BinarySearch(int arr[],int low, int high, int key){
    while (low <= high)
    {
        //if middle element matchs with key
        int mid = (low + high) / 2;

        if (arr[mid]== key)
        {
            return mid;
        }

        // if middle element does not match with key

        else if (arr[mid] > key)
        {
            high = mid - 1;// we let low retain its value and change value of 
        }
        else if (arr[mid] < key)
        {
            low  = mid + 1; 
            // here in this case we want high to not change and retain its previous value.
        }       
    }
    return -1;
    
}


int main(){

    int a[] = {1,2,3,4,5,6,8};
    
    return 0;
}
