#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v(5,10);
    for( int x : v)
    {
        cout<<x<<endl;
    }

    string henlo {"harun medhavi"};
    const auto tail = {'r','a','b','c'};

    cout<<henlo<<endl;

    henlo.append(tail.begin(),tail.end());

    cout<<henlo<<endl;

    string fin("*");
    fin.append(10,'p');
    cout<<fin<<endl;


}
