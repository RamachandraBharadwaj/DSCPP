// program of palindrome prime numbers between 1 and 1000

#include <iostream>

bool primo(int x)
{

    int c=0;
    for(int j=2;j<x;j++){
        if(x%j==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return true;
    }
    else{
        return false;
    }

}

bool chck(int x)
{

    int sumo=0;
    int te=x;
    while(x>0)
    {
        int r=x%10;
        sumo=(sumo*10)+r;
        x/=10;

    }
    //std::cout<<"the pal val = "<<sumo<<std::endl;

    if(sumo==te)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    for(int i=2;i<=1000;i++)
    {
        if(chck(i) && primo(i))
        {
            std::cout<<i<<std::endl;
        }
    }
    
}