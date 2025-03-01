#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Queue
{
    public:
    stack <int> s1,s2;

    void Enqueue(int x)
    {
        s1.push(x);

    }

    void Dequeue()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"The queue is empty !"<<endl;
        }
        else
        {
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop()
                }
            }

            int x=s2.pop();
            s2.pop();
            cout<<x<<endl;

        }
    }


};

int main()
{

}