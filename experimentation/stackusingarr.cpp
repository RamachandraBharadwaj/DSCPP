#include <iostream>
using namespace std;
#define MAX 10;

class Stacko
{
    public:
    int top;
    int arro[MAX];

    Stacko()
    {
        top=-1;
    }

    void push(int x)
    {
        if(top>MAX-1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            arro[++top]=  x; 
        }
    }
    
    void pop()
    {
        if(top<0)
        {
            cout<<"Stack Underflow !! "<<endl;
        }

        else
        {
            cout<<"Popped element is : "<<arro[top]<<endl;
            arro[top]=0;
            top--;
        }
    }
    void length()
    {
        cout<<"Length of stack : "<<top+1<<endl;
    }

    void peek()
    {
        cout<<"Top-most element is : "<<arro[top];
    }


};