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

class CircularLinkedList
{
    public:
    Node *head=NULL;
    Node *tail=NULL;


    void create(int dem)
    {
        if(head==NULL)
        {
            Node *new_node= new Node(dem);
            head = new_node;
            tail= new_node;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            Node *newm= new Node(dem);
            temp->next=newm;
            newm->next=head;
            tail=newm;
        }
    }

    void display()
    {
        Node *temp=head;
        while(temp!=tail)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

    void Add_at_begin(int deq)
    {
         if(head==NULL)
        {
            Node *new_node= new Node(deq);
            head = new_node;
            tail= new_node;
        }
        else
        {
            Node *newmo= new Node(deq);
            newmo->next=head;
            tail->next=newmo;
        }
    }

    int lengthLL()
    {
        int l=0;

        if(head==NULL)
        {
            return 0;
        }
        else
        {
            Node *temp = head;
            while(temp!=tail)
            {
                l++;
            }

            l=l==0?1:l;

            return l;
        }

    }

    void delete_by_element(int deq)
    {
        if(lengthLL()==0)
        {
            cout<<"Can't delete from an empty LinkedList"<<endl;
        }
        else
        {
            bool chk=false;

            Node *temp=head;
            Node *temp2=head;

            while(temp!=tail)
            {
                if(temp->data==deq)
                {
                    chk=true;
                    break;
                }
                temp=temp->next;
                temp2=temp;
            }
            if(chk)
            {
                temp2->next=temp->next;
                free(temp);
            }
            else
            {
                cout<<"Error : element not found in LL"<<endl;
            }
  

        }
    }

};


int main()
{
    CircularLinkedList CLL;
    CLL.create(10);
    CLL.create(20);
    CLL.create(30);
    CLL.display();
    cout<<"**********"<<endl;
    CLL.Add_at_begin(100);
    CLL.display();
    cout<<"**********"<<endl;
    CLL.delete_by_element(20);
    CLL.display();
}