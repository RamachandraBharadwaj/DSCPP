//circular prime number

#include <bits/stdc++.h>
#include <vector>

bool primo(int x)
{
    int cre=0;
    for (int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cre++;
        }
    }
    if(cre==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int counter=0;
    std::vector<int> v1;
    int num;
    std::cin>>num;
    int len = (std::to_string(num)).length();
    while(num>0)
    {
        int r = num % 10;
        v1.insert(v1.begin(),r);  
        num=num/10;
    }

    for(int i =0;i<len;i++)
    {
        int tempara=0;
        for(auto x:v1){
            tempara=(tempara)*10+x;
        }
        if(primo(tempara))
        {
            counter+=1;
        }
        
        v1.push_back(v1[0]);
        v1.erase(v1.begin());
    }

    if(counter==len){
        std::cout<<"This is a circular prime number";
    }
    else{
        std::cout<<"not a circular prime !";
    }


}
