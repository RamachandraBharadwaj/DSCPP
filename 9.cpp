#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    rotate(v.begin(),v.begin()+1,v.end());

    for(int x: v)
    {
        cout<<x;
    }

    cout<<endl;

    vector<int> v12;

    cout<<"Vector 1 : "<<endl;

    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));

    cout<<endl;

    copy_n(istream_iterator<int>(cin),5,back_inserter(v12));

    cout<<"Vector 2 :"<<endl;

    copy(v12.begin(),v12.end(),ostream_iterator<int>(cout," "));


    cout<<"set intersection : "<<endl;
    vector<int> xx;
    set_intersection(v.begin(),v.end(),v12.begin(),v12.end(),back_inserter(xx));

    for(int x : xx)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    xx.clear();

    cout<<"set  symmetric difference : "<<endl;
    set_symmetric_difference(v.begin(),v.end(),v12.begin(),v12.end(),back_inserter(xx));

    for(int x : xx)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    xx.clear();

    cout<<"set union : "<<endl;

    set_union(v.begin(),v.end(),v12.begin(),v12.end(),back_inserter(xx));

    for(int x : xx)
    {
        cout<<x<<" ";
    }
    cout<<endl;




}
