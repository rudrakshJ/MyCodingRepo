#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> &arr)
{
    int max = arr[0];
    for (int i = 0; i<arr.size(); i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
        }
            
    }
        
    return max;
}

int recurLargest(vector<int> &arr)
{
    int max = arr[0];
    for (int i = 0; i<arr.size(); i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
        }
            
    }
        
    return max;
}

int main()
{
    vector<int> vec = {1,13,55,87,3,76};
    cout << "The largest element is : " << largest(vec);
    return 0;
}