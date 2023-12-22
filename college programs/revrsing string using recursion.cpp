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
    string s="hello world";
    string bresker(52,'*');

    for(int i=s.length();i>=0;i--)
    {
        cout<<s[i];
    }
    cout<<endl;
    cout<<bresker<<endl;

    string rev = recurr(s,s.length());
    cout<<rev;

}