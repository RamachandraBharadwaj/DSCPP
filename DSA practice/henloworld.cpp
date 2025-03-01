#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    cout<<"Enter number of elements to take into a vector : "<<endl;
    int n;
    cin>>n;

    copy_n(istream_iterator<int>(cin),n,back_inserter(v));

    for(int x :v)
    {
        cout<<x<<endl;
    }

    cout<<"*********"<<endl;

    for(auto it=v.rbegin();it!=v.rend();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
