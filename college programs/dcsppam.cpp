/*Write a c++ program to print the right most path of a binary tree
     1
    / \
   2   3
    \   \
     5   4
     
sample input=
sample output=
Rightmost path: 1 3 4 

*/


#include <iostream>
using namespace std;

class Node
{
    public:
    
    int data;
    Node *left;
    Node *right;
    
    Node(int de)
    {
        data=de;
        left=NULL;
        right=NULL;
    }
};
class Tree
{
    public:
    Node *root;
    
    void insert(int dem)
    {
        if(root==NULL)
        {
            Node *new_nodey= new Node(dem);
            root=new_nodey;
        }
        
    }
    
    void right_traverse()
    {
        cout<<"Rightmost path: ";
        Node *temp=root;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }
    
};
int main()

{
    Tree T;
    T.root=new Node(1);
    T.root->left=new Node(2);
    T.root->right=new Node(3);
    T.root->right->right=new Node(4);
    T.root->left->right=new Node(5);
    T.right_traverse();
    
    
    
    return 0;
}