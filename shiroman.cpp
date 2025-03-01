#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,string>> v1;
    v1.push_back({5,"hello"});
    v1.push_back({211,"hello"});
    v1.push_back({3,"vidhi"});
    v1.push_back({23,"vidi"});



    for(auto it : v1)
    {
        cout<<it.first<<"   "<<it.second<<endl;
    }

    cout<<"kys bro"<<endl;

    sort(v1.begin(),v1.end(),[](const pair<int,string>&a ,const pair<int,string>&b){return a.first<b.first;});

    for(auto it : v1)
    {
        cout<<it.first<<"   "<<it.second<<endl;
    }


    cout<<endl;s

    auto it=max_element(v1.begin(),v1.end(),[](const pair<int,string> &a, const pair<int,string> &b){return a.first<b.first;});
    cout<<it->first<<" "<<it->second<<endl;




}
