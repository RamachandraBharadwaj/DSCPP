#include <iostream>
#include <cmath>
using namespace std;


bool primo(int x)
{

    int c=0;

    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }

    if(c>1)
    {
        return false;
    }

    return true;
}


bool circu(int n,int siz)
{
    int end=siz-1;
    bool bro=true;
    if(primo(n))
    {
        while(end>0)
        {
            int temp=(int)n/10;
            int rem =n%10;
            int fin=(rem*(pow(10,to_string(temp).length())))+temp;
            bro= bro & primo(fin);
        }
        
        return bro;
    }

    return false;

}
int main()
{
    int number;
    cout<<"enter a number : "<<endl;
    cin>>number;

    int size=to_string(number).length();
    bool z=circu(number,size);

    if(z==true)
    {
        cout<<"circular prime !"<<endl;
    }
    else
    {
        cout<<"not a circular prime "<<endl;
    }

}