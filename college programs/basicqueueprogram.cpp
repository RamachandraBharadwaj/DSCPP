/*
Write a CPP program to queue using Linked List

Sample Input-Output:
Queue before deletion: 18 17 16 15 14 13 12 11 10                                                                       
                                                                                                                        
Queue after deletion: 17 16 15 14 13 12 11 10                                                                           
                                                                                                                        
*/

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
class LinkedList
{
    public:
    Node *head=NULL;
    
    void creation(int dem)
    {
        if(head=NULL)
        {
            Node *new_no=new Node(dem);
            head= new_no;
        }
        else
        {
            Node *temp =head;
            
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            
            Node *nodey= new Node(dem);
            temp->next=nodey;
            
        }
    }
    
    void pop()
    {
        Node *temp=head;
        head=temp->next;
    }
    
    void display()
    {
        Node *temp =head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
        }
        cout<<endl;
    }
};


int main()
{
    LinkedList l;
    l.creation(18);
    l.creation(17);
    l.creation(16);
    l.creation(14);
    l.creation(13);
    l.creation(12);
    l.creation(11);
    l.creation(10);
    
    cout<<"Queue before deletion: ";
    l.display();
    cout<<"Queue after deletion: ";
    l.display();
}