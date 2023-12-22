/*
Write a C++ program to check whether array is sorted or not.
HINT:Initialize array with {1,6,3,4,5} and check whether an array is 
sorted or not, return 1 if sorted else 0. 

SAMPLE OUTPUT:0

*/

#include <iostream>
using namespace std;

bool sorte(int arr[], int n, int i)
{
    if(i==n)
    {
        return true;
    }
    else{
        if(arr[i]<arr[i+1])
        {
            return sorte(arr,n,i+1);
        }
        else{
            return false;
        }
    }

}
int main()
{
    int a[]={1,6,3,4,5};
    
    int r= sorte(a,5,0);

    cout<<r;
    
    return 0;
}
