#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    v.push_back(45);
    v.push_back(23);
    v.push_back(12);
    v.push_back(78);
    v.push_back(1);

    namespace rang=std::ranges;

    rang::sort(v.begin(),v.end(),rang::greater());

    for(int x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
