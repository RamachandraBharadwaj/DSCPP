/*
Circular Queue using Linked List
 
Sample Input-Output:

10 enqueued to the queue.                                                                                               
20 enqueued to the queue.                                                                                               
30 enqueued to the queue.                                                                                               
Circular Queue elements: 10 20 30                                                                                       
10 dequeued from the queue.                                                                                             
Circular Queue elements: 20 30                                                                                          
20 dequeued from the queue.                                                                                             
30 dequeued from the queue.                                                                                             
                                                                                                                        
                                                                                                                        
                               

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
class Queue
{
    public:
    Node *head=NULL;
    Node *assum_tail=NULL;
    
    void enqueue(int dem)
    {
        if(head==NULL)
        {
            Node *new_no=new Node(dem);
            head= new_no;
            new_no->next=head;
            assum_tail=new_no;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            
            Node *nodey= new Node(dem);
            temp->next=nodey;
            assum_tail=nodey;
            nodey->next=head;
            
        }
        
        cout<<dem<<" enqueued to the queue."<<endl;
    }
    
    void dequeue()
    {
        Node *temp=head;
        cout<<temp->data<<" dequeued from the queue."<<endl;
        head=temp->next;
        assum_tail->next=head;
        //free(temp);
    }
    
    void display()
    {
        cout<<"Circular Queue elements: ";
        Node *temp =head;
        int c=0;
        while(temp!=NULL)
        {
            if((c>0) && (temp==head))
            {
                break;
            }
            cout<<temp->data<<" ";
            temp=temp->next;
            c++;
        }
        cout<<endl;
    }
};


int main()
{
    Queue l;
    l.enqueue(10);
    l.enqueue(20);
    l.enqueue(30);
    l.enqueue(40);
    l.display();
    l.dequeue();
    l.display();
    l.dequeue();
    l.dequeue();
    l.display();
}