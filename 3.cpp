#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v(5);
    string x;
    copy_n(istream_iterator<int>(cin),5,v.begin());

    replace(v.begin(),v.end(),3,99);

    for(int x :v)
    {
        cout<<x<<endl;
    }3

}
