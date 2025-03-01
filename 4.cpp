#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //replace_if(v.begin(),v.end(),[] (int x){return x%2==0;},69);
    replace(v.begin(),v.end(),2,69);


    for(int xyz: v)
    {
        cout<<xyz<<" ";
    }

    cout<<""<<endl;

    vector<int> v12(v.size());

    adjacent_difference(v.begin(),v.end(),v12.begin());

    cout<<"adjacent difference : "<<endl;

    for(int xyz: v12)
    {
        cout<<xyz<<" ";
    }

    cout<<endl;

    if(any_of(v12.begin(),v12.end(),[](int &x){return x%2==0;}))
        {
            cout<<"atleast 1 element is divisible by 2"<<endl;
        }





}
