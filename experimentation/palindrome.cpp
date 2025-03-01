#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char>s;

    cout<<"Enter a string to check if it is palindrome or not : "<<endl;
    string se;

    cin>>se;

    int l=se.length();
    int mid=(int)l/2;

    for(int i=0;i<=mid;i++)
    {
        s.push(se[i]);
    }

    if(l%2!=0){s.pop();}

    bool checko;

    for(int i=mid+1;i<l-1;i++)
    {
        char xe= s.top();
        cout<<se<<"   "<<se[i]<<endl;
        if(xe!=se[i])
        {
            checko=false;
            break;
        }
        s.pop();
    }

    string fin=(checko)?"Palindrome string":"Not palindrome string !";
    cout<<fin<<endl;

}