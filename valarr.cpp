#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    valarray<int> va={1,2,4,5,463};
    va=va*2;
    for( int x :va)
    {

        cout<<x<<endl;
    }
}
