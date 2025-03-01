#include <iostream>
using namespace std;


class Binarytree
{
    public:
    int tree[10]={-1};

    void root(int x)
    {
        tree[0]=x;
    }

    void set_left(int value, int parent_idx)
    {
        if(tree[parent_idx]==-1 || parent_idx>=10)
        {
            cout<<"Error : cannot insert child node to a parent that doesn't exist !"<<endl;
        }
        else
        {
            tree[(2*parent_idx)+1]=value;

        }
    }

    void set_right(int value, int parent_idx)
    {
        if(tree[parent_idx]==-1 || parent_idx>=10)
        {
            cout<<"Error : cannot insert child node to a parent that doesn't exist !"<<endl;
        }
        else
        {
            tree[(2*parent_idx)+2]=value;

        }
    }

    void display()
    {
        cout<<"Index : "<<endl;
        
        for(int i=0;i<10;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;

        cout<<"Values : "<<endl;

        for(int i=0;i<10;i++)
        {
            cout<<tree[i]<<" ";
        }
        cout<<endl;
    }



};

int main()
{
    Binarytree bt;

    bt.root(1);
    bt.display();
    bt.set_left(2,0);
    bt.set_right(3,0);
    bt.set_left(4,1);
    bt.set_right(5,1);
    bt.display();
    



    return 0;
}