//arithematic series

#include <iostream>

int recu(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    else{
        return x*recu(x-1);
    }

}

int main(){

    int r;
    std::cin>>r;
    int z=1;
    int sum=0;

    while(z<=r){
        sum+= recu(z);
        z++;
    }

    std::cout<<"The arithematic series until "<< r <<" is "<<sum;



}