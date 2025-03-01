# include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

class LinkedList
{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int len;

    void create(int d)
    {
        if(head==NULL)
        {
            Node *new_one=new Node(d); 
            head=new_one;
            new_one->prev=NULL;
        }

        else{
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node *new_node= new Node(d);
            tail=new_node;
            temp->next=new_node;
            new_node->prev=temp;
        }
    }

    void deletion(int pos)
    {
        //here pos stands for the index of the linked list where node has to be removed

        int idex=0;
        Node *temp = head;
        while(idex<pos)
        {
            temp=temp->next;
            idex++;
        }
        Node *nexto = temp->next;
        nexto=nexto->next;

        temp->next=nexto; 
        nexto->prev=temp;

    }

    void length()
    {
        int length;
        Node *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            length++;
        }

        len=length;

        cout<<"The length of the linked  list : "<<length<<endl;

    }

    bool isempty()
    {
        if(head==NULL)
        {
            return true;
        }

        return false;

    }

    void display()
    {

        cout<<"the linked list is :"<<endl;
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }

    }

    void reverse_display()
    {
        Node *temp=tail;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->prev;
        }

    }

    void middle_node()
    {
        int half=(int) len/2;
        int idx=0;
        Node *temp=head;
        while(idx!=half)
        {
            temp=temp->next;
        }

        cout<<"middle node is : "<<temp->data<<endl;

    }



};


int main()
{
    LinkedList l;

    cout<<"here you go"<<endl;
    l.create(5);
    l.create(10);
    l.create(15);
    l.create(20);
    l.create(25);
    l.display();
    cout<<"**********"<<endl;
    l.reverse_display();


    return 0;
}