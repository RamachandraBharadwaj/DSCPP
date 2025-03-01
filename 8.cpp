#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(20);
    v.push_back(34);
    v.push_back(56);
    v.push_back(45);
    v.push_back(23);

    if(all_of(v.begin(),v.end(),[](int &x){ return x%2==0;}))
        {

            cout<<"divisible by 2"<<endl;
        }
    else
    {
        cout<<"not divisible by 2! "<<endl;
    }

    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));

    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;

    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
}
