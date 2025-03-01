#include <iostream>
using namespace std;

class Node
{
    public:
    char data;
    Node * next;

    Node(char x)
    {
        data=x;
        next=NULL;
    }
};

class Stack
{
    public:

    Node *head=NULL;
    Node *top=NULL;

    void push(char xy)
    {
        Node* new_node=new Node(xy);

        if(head==NULL)
        {
            head=new_node;
            top=new_node;

        }
        else
        {
            //Node *temp=head;
            /*
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }

            temp->next=new_node;
            top=new_node;
            */
           new_node->next=top;
           top=new_node;

        }
        
    }

    void pop()
    {
        Node *temp=top;
        Node *temp2=temp->next;
        top=temp2;
        free(temp);
        
    }

    void display()
    {
        Node *temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }

    }

    bool isnull()
    {
        if(head==NULL)
        {
            return true;
        }
        return false;
    }

    string check_operator(string sev, Stack obj)
    {
        string fino;

        for(int i=0;i<sev.length();i++)
        {
            char tem= sev[i];
            if(isdigit(tem))
            {
                fino+=tem;
            }

        }

        return fino;

    }



};

int main()
{
    string sem;
    cin>>sem;
    Stack s;
    //string postfix = s.check_operator(sem,s);
    //cout<<" The string in postfix form is : "<<postfix<<endl;
    s.push('a');
    s.push('b');
    s.push('c');
    s.display();
    cout<<"********"<<endl;
    s.pop();
    s.pop();
    s.display();
    cout<<"********"<<endl;
    s.pop();
    s.display();
    cout<<"********"<<endl;


}