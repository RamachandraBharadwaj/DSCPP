#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(10);

    copy_n(istream_iterator<int>(cin),10,v.begin());

    vector<int>psum(10);

    partial_sum(v.begin(),v.end(),psum.begin());

    for(int x: psum)
    {
        cout<<x<<" ";
    }
    cout<<" "<<endl;

    struct summa
    {
        int d;
        summa(int x):d(x){}
        int opr(int n) const {return d+n}
    };





}
