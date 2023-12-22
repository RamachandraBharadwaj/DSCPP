//program to check automorphic numbers
#include <iostream>

int main()
{
    for (int i=1;i<=1000;i++)
    {
        int sqr =i*i;
        std::string tempo =std::to_string(sqr);
        std::string num = std::to_string(i);
        std::string amongus =tempo.substr(tempo.length()-num.length(),tempo.length());
        if(amongus==num)
        {
            std::cout<<i<<std::endl;
        }
    }

}