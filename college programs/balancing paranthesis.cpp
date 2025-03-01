/*
Balanced paranthesis using linked list implementation

Sample Input-Output1:

Enter a string with parentheses: {{[]}}                                                                                 
The parentheses are balanced.  

Sample Input-Output2: 

Enter a string with parentheses: [}                                                                                     
The parentheses are not balanced.                                                                                       
                                                                                                                        
                                                                                        
*/
 #include <iostream>
 using namespace std;

 class Node
 {
    public:
    char data;
    Node *next;

    Node(char d)
    {
        data=d;
        next=NULL;
    }

 };


 class Stack
 {
    public:

    Node *head=NULL;
    Node *tail=NULL;

    void push(char x)
    {
      if(head==NULL)
      {
         Node *new_node= new Node(x);
         head= new_node;
         return;
      }
      Node *temp=head;
      Node *nodey = new Node(x);
      head=nodey;
      nodey->next=temp;

    }

    int length()
    {
      int len=0;
      Node *temp=head;

      while(temp->next!=NULL)
      {
         len++;
         temp=temp->next;
      }
      tail=temp;

      return len+1;

    }

    void display()
    {
      Node *temp= head;
      while(temp!=NULL)
      {
         cout<<temp->data<<" ";
         temp=temp->next;
      }

    }

    bool balanciago()
    {
      int l=length();
      if(l%2!=0)
      {
         return false;
      }
      else
      {
         Node *temp= head;
         Node *temp2=tail;
         for(int i=0;i<l/2;i++)
         {
            switch(temp->data)
            {
               case "{":
            }
         }


    }

    
 };

 int main()
 {
   string s;
   cout<<"Enter a string with parentheses: ";
   cin>>s;

   Stack s1;

   for (int i=0;i<s.length();i++)
   {
      s1.push(s[i]);
   }
   
   s1.display();

   /*

   if(s1.balanciago())
   {
      cout<<"The parentheses are balanced."<<endl;
   }
   else
   {
      cout<<"The parentheses are not balanced."<<endl;
   }

   */


   return 0;
 }