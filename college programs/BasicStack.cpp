// program to implement basic stack

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int de)
    {
        data=de;
        next=NULL;
    }
};

class Stack
{
    public:
    Node *head=NULL;
    Node *top=NULL;

    void push(int dem)
    {
        if(head==NULL)
        {
            Node *new_node= new Node(dem);
            head=new_node;
            top=new_node;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node *newm=new Node(dem);
            temp->next=newm;
            top=newm;
        }

    }

    void pop()
    {
        if(isempty())
        {
            cout<<"cannot pop from an empty stack !"<<endl;

        }
        else
        {
            if(head!=top)
            {
                Node *temp=head;
                while(temp->next!=top)
                {
                    temp=temp->next;
                }
                free(top);
                temp->next=NULL;
                top=temp;

            }
            else
            {
                head=NULL;
                top=NULL;
            }
        }

    }

    bool isempty()
    {
        if(head==NULL)
        {
            return true;
        }
        return false;

    }

    void peek()
    {
        cout<<"topmost element : "<<top->data<<endl;
    }

    void display()
    {
        if(isempty())
        {
            cout<<"stack is empty !"<<endl;
        }
        else
        {
            Node *temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }

    }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    cout<<"**********"<<endl;
    s.pop();
    s.pop();
    s.display();
    cout<<"**********"<<endl;
    s.pop();
    s.display();
    cout<<"**********"<<endl;
    s.pop();
    s.display();
    cout<<"**********"<<endl;

    return 0;
}