#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int,string> mapper={{1,"Rama"},{2,"Krishna"},{5,"Shiva"},{4,"Lakshmi"},{0,"Keshav"}};

    auto it=mapper.begin();

    for(const auto &p :mapper)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    for(it=mapper.begin();it!=mapper.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
