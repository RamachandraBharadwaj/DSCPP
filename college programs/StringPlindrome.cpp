#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class Node
{
    public:
    char data;
    Node *next;

    Node(char de)
    {
        data=de;
        next=NULL;
    }

};

class Stack
{
    public:
    Node * head=NULL;
    Node * bottom= NULL;


    int stack_length()
    {
        Node * temp = bottom;

        if(temp==NULL)
        {
            return 0;
        }
        else
        {
            int leno;
            while(temp!=NULL)
            {
                temp=temp->next;
                leno++;
            } 
            return (leno>0)?leno:1;

        }

    }


    bool isempty()
    {
        if(stack_length()>0)
        {
            return true;
        }
        return false;
    }

    void push(int der)
    {
        if(head==NULL)
        {
            Node *new_node= new Node(der);
            head=new_node;
            bottom=new_node;
        }
        else
        {
            Node * newm = new Node(der);
            newm->next=head;
            head=newm;
        }

    }
    void display()
    {
        Node *tempo=head;
        while(tempo!=NULL)
        {
            cout<<tempo->data<<endl;
            tempo=tempo->next;
        }
    }

    Node *pop()
    {
        Node *tem=head;
        if(tem==NULL)
        {
            cout<<"empty stack"<<endl;
            return NULL;

        }
        
        else
        {
            head=tem->next;
            return tem;
        }

    }
    

};

int main()
{
    cout<<"Enter a string to check if it is a palindrome or not !"<<endl;
    string s;
    cin>>s;

    Stack sta;

    int len=s.length();
    cout<<"length : "<<len<<endl;
    int middle_val=(len%2==0)?len/2:(len+1)/2;
    cout<<"middle val : "<<middle_val<<endl;
    for(int i=0;i<middle_val;i++)
    {
        sta.push(s[i]);
    }

    bool truman; // like Harry S truman lol .....
    sta.display();
    if(len%2!=0){sta.pop();}
    cout<<"*****"<<endl;
    sta.display();
    cout<<"*****"<<endl;

    for(int i=middle_val;i<len;i++)
    {
        Node *tempara=sta.pop();
        cout<<tempara->data<<"     "<<s[i]<<endl;
        if(tempara->data==s[i])
        {
            truman=true;
        }
        else
        {
            truman=false;
            break;
        }

    }
    string fin=(truman)?"this is a palindrome string":"this isn't a palindrome string";
    cout<<fin;

    return 0;
}