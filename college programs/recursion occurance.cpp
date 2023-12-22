/* 
Write a CPP program to find the 
first occurrence and last occurrence of an array using recursion

Hint:

take array as {4,2,1,2,2,7} print the first and last ocurrence of 2

Sample Output:

first occurrence is                                                                                                     
1                                                                                                                       
last occurrence is                                                                                                      
4                                                                                                                       
 
*/

#include <iostream>
using namespace std;

int occ(int arr[],int targ, int idx, bool chk)
{
    if(targ==arr[idx])
    {
        return idx;
    }
    else{
        if(chk==true)
        {
            return occ(arr,targ,idx+1,chk);

        }
        else{

            return occ(arr,targ,idx-1,chk);

        }
    }


}

int main()
{
    int arr[]={4,2,1,2,2,7};
    int target=2;

    int first= occ(arr,target,0,true);
    int last=occ(arr,target,6,false);

    cout<<"first occurance is "<<endl;
    cout<<first<<endl;
    cout<<"last occurance is "<<endl;
    cout<<last;


    return 0;
}