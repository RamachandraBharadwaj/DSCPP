#include <iostream>
using namespace std;

void quick_sort(int *array, int f, int l)
{
    int i,j,p,t=0;

    if(f<l)
    {
        i=f;
        p=l;
        j=l;

        while(i<j)
        {
            while(array[i]<=array[p] && i<l)
            {
                i++;
            }

            while(array[j]>array[p])
            {
                j--;
            }

            if(i<j)
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }

        }

        quick_sort(array,f,j-1);
        quick_sort(array,j+1,l);

    }

    

}

int main()
{
    int n;
    cout<<"Enter the umber of elements : "<<endl;
    cin>>n;
    int arro[n];

    cout<<"enter the elements of the array : "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arro[i];
    }

    quick_sort(arro,0,n-1);

    cout<<"Elements after sorting : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arro[i]<<" ";
    }

    cout<<endl;

    return 0;

}