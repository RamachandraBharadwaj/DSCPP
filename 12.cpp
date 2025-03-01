#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector <int> v{1,23,6,78,90};
    int count=0;
    vector<int> mask(3,true);
    mask.resize(n,false);


    sort(v.begin(),v.end());

    do
    {
        for(int i=0;i<5;++i)
        {

            if(mask[i])
            {

                cout<<v[i]<<" ";
            }
        }

        cout<<endl;
        count++;

    }while(next_permutation(v.begin(),v.end()));

    cout<<count<<endl;
}
