#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v(1);
    v.push_back(12);
    v.push_back(1);
    v.push_back(89);
    v.push_back(23);
    v.push_back(19);

    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

    int prod=accumulate(v.begin(),v.end(),1,multiplies<int>());


    int exe;
    cin>>exe;
    if(binary_search(v.begin(),v.end(),exe))
    {
        cout<<"The element is found in vector"<<endl;
        auto
    }
    else
    {
        cout<<"Not found !!"<<endl;
    }
}
