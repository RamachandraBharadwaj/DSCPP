#include <iostream>
using namespace std;


string recurr(string nam, int len)
{
    if(len<0)
    {
        return "";
    }
    
    return nam[len]+recurr(nam,len-1);
}

int main()
{
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);

    string bresker(52,'*');
    cout<<bresker<<endl;

    string rev = recurr(s,s.length());
    cout<<rev;

}