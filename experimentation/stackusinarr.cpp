#include <iostream>
using namespace std;
#define MAX 50

class stack
{
    public:
    int top;
    int arro[MAX];

    stack()
    {
        top=-1;
    }

    void push(int x)
    {
        if(top>MAX-1)
        {
            cout<<"Stack overflow ! Cannot push more elements !"<<endl;

        }
        else
        {
            top++;
            arro[top]=x;
            cout<<x<<" pushed to the stack"<<endl;
        }
    }

    void pop()
    {
        if(top<0)
        {
            cout<<"Stack underflow !! cannot pop out from an empty stack !"<<endl;
        }
        else
        {
            arro[top]=0;
            top--;
        }
    }

    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arro[i]<<endl;
        }
    }

    void length()
    {
        cout<<"Length of the stack is : "<<top<<endl;
    }

    bool isempty()
    {
        if(top<1)
        {
            return true;
        }
        else
        {
            return false;

        }
    }

};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.pop();
    cout<<"******"<<endl;
    s.display();
    s.length();

}