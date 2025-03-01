#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(12,0);

    int y=9;
    for_each(v.begin(),v.end(),[&](int &x)mutable{cout<<x<<endl; y--;});

    cout<<"y = "<<y<<endl;


}
