#include <iostream>
using namespace std;

//linked list ADT auditorium
class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        data =d;
        next=NULL;
    }

};

class LinkedList
{
    public:
    Node *head=NULL;

    void create(int d)
    {
        if(head==NULL)
        {
            Node *x = new Node(d);
            head=x;
        }

        else
        {
            // inserting elements at the end
            Node *temp= head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node *newnode = new Node(d);
            temp->next=newnode;
            

        }
    }


    void display()
    {
        Node * temp= head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            cout<<"Address is ="<<temp<<endl;
            temp=temp->next;
        }
    }

    void insert_at_index(int val, int pos)
    {
        Node *temp= head;

        if(temp==NULL)
        {
            if(pos!=0)
            {
                cout<<"error ! check the size of linked list !"<<endl;
                return;
            }

        }

        int where=0;
        while(where<(pos-1))
        {
            where+=1;
            temp=temp->next;
        }
        Node *newone= new Node(val);
        Node *temp2;
        temp2=temp->next;
        temp->next=newone;
        newone->next=temp2;
        
    }

    void length()
    {
        Node *temp = head;
        int l=0;
        while(temp->next!=NULL)
        {
            l+=1;
            temp=temp->next;
        }

        cout<<"Length of the Linked list is : "<<l<<endl;
    }


    void insert_element_at_start(int d)
    {
        //starting of the linked list
        Node *temp = head;
        if(head==NULL)
        {
            Node *new_node =new Node(d);
            head=new_node;
            
        }
        else
        {
            Node *new_node= new Node(d);
            head=new_node;
            new_node->next=temp;
        }
    }


    void deletion(int pos)
    {
        //deletion at an index, we are taking the index of the element present in the linked list to be deleted
        Node *temp=head;
        if(temp==NULL)
        {
            cout<<"The linked list is empty, lil bro"<<endl;
        }
        else
        {
            int counter=0;

            while (counter!=(pos-1))
            {
                temp=temp->next;
                counter+=1;
            }

            Node *temp2=temp->next;
            temp->next=temp2->next;
            // delete  temp2;
            // deleting the temp2 pointer not necessary as the modern C++ has inbuilt garbage collector although it is a good practice to do it to avoid memory leaks in backwards compatible programs
        }
        
    }

};

int main()
{
    LinkedList listu;

    listu.create(5);
    listu.create(6);
    listu.create(7);
    listu.display();
    cout<<"******************************"<<endl;
    listu.insert_at_index(8,1);
    listu.display();
    cout<<"******************************"<<endl;
    listu.deletion(2);
    listu.display();
    cout<<"******************************"<<endl;
    listu.insert_element_at_start(68);
    listu.insert_element_at_start(98);
    listu.display();

    return 0;

}