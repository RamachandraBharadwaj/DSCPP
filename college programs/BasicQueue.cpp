// program to implement basic queue

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

class Queue
{
    public:
    Node *head=NULL;
    Node *tail=NULL;

    void enqueue(int dem)
    {
        if(head==NULL)
        {
            Node *new_node= new Node(dem);
            head=new_node;
            tail=new_node;
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
            tail=newm;
        }

    }

    void dequeue()
    {
        if(isempty())
        {
            cout<<"cannot dequeue from an empty Queue !"<<endl;

        }
        else
        {
            if(head!=tail)
            {
                Node *temp=head;
                head=temp->next;
                free(temp);
            }
            else
            {
                head=NULL;
                tail=NULL;
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
        cout<<"topmost element : "<<head->data<<endl;
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
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout<<"**********"<<endl;
    q.dequeue();
    q.dequeue();
    q.peek();
    q.display();
    cout<<"**********"<<endl;
    q.dequeue();
    q.display();
    cout<<"**********"<<endl;
    q.dequeue();
    q.display();
    cout<<"**********"<<endl;

    return 0;
}