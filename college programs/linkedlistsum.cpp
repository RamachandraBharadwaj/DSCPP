#include <iostream>
using namespace std;



class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        data=d;
        next=NULL;
    }


};
class Linkedlist
{
    public:
    Node *head=NULL;


    void create(int dx)
    {
        if(head==NULL)
        {
            Node *new_n= new Node(dx);
            head=new_n;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node *new_node= new Node(dx);
            temp->next=new_node;
            
        }
    }


    void display()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }


    void insert(int pos)
    {
        
    }


};

int main()
{
    Linkedlist l;
    l.create(50);
    l.create(53);
    l.create(23);
    l.create(78);
    l.display();


}