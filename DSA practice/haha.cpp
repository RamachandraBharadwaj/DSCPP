#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(24);
    v.push_back(323);
    v.push_back(34);

    vector<int> v1={1,2,3,4,57,7,8};

    cout<<count_if(v.begin(),v.end(),[](int i){return i>30;})<<endl;
    //cout<<v.at(45)<<endl;

    v.insert(v.begin()+2,89);
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
    v.swap(v1);
    cout<<"after swap :"<<endl;
    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));

    return 0;
}
