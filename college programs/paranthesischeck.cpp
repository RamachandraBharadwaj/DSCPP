#include <iostream>
using namespace std;

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
    string s;
    Stack sta;
    cout<<"enter the set of paranthesis to check if they are balanced or not : "<<endl;
    cin>>s;

    int l=s.length();

    if(l%2!=0)
    {
        cout<<"The paranthesis are not balanced !"<<endl;
    }
    else
    {
        bool chk;

        for(int i=0;i<l/2;i++)
        {
            sta.push(s[i]);
        }

        //cout<<sta.head<<endl;

        sta.display();

        for(int i=(l/2);i<l;i++)
        {
            Node *tempara=sta.pop();
            cout<<tempara->data<<"   "<<s[i]<<endl;
            if(tempara->data==s[i])
            {
                chk=true;
            }
            else
            {
                chk=false;
                break;
            }
        }

        if(chk==true)
        {
            cout<<"The paranthesis are balanced"<<endl;
        }
        else
        {
            cout<<"The paranthesis are not balanced !"<<endl;
        }

    }
    return 0;
    

}