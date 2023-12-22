#include <iostream>
using namespace std;

class Dynamo
{
    public:

    string datatype;
    int size;
    int *arr;

    Dynamo()
    {
        size=2;
        arr= new int[size];
        for(int i=0;i<=size;i++)
        {
            arr[i]=0;
        }
    }

    void printpoly()
    {
        for(int i=size;i>=0;i--)
        {
            cout<<arr[i]<<" "<<"X^"<<i<<" + ";
        }

    }

    void insert(int coeff , int degree)
    {
        if(degree>size)
        {
            int *b = new int[degree];
            for(int i=0;i<=degree;i++)
            {
                if(i>size)
                {
                    b[i]=0;
                }
                else
                {
                    b[i]=arr[i];
                }

                if(i==degree)
                {
                    b[i]=coeff;
                }

            }
            arr=b;
            size=degree;

        }
        else
        {
            if(arr[degree]!=0)
            {
                cout<<"already inserted";
            }
            else
            {
                arr[degree]=coeff;
            }

        }

    }

};


int main()
{
    Dynamo poly1;
    Dynamo poly2;
    Dynamo master_object;
    string op="Y";
    string op2="";

    cout<<"Enter the co-efficients of the first polynomial !"<<endl;

    while(true)
    {
        int coeff=0;
        int degree=0;
        cout<<"ENTER THE CO-EFFICIENT OF THE TERM"<<endl;
        cin>>coeff;
        cout<<"ENTER THE DEGREE OF THE TERM"<<endl;
        cin>>degree;
        
        poly1.insert(coeff,degree);

        cout<<"You want to add more terms and continue ? Press(Y) to continue."<<endl;
        cin>>op2;
        int calc=op.compare(op2);
        if(calc==0)
        {
            continue;
        }
        else
        {
            break;
        }

    }
    poly1.printpoly();

    while(true)
    {
        int coeff=0;
        int degree=0;
        cout<<"ENTER THE CO-EFFICIENT OF THE TERM"<<endl;
        cin>>coeff;
        cout<<"ENTER THE DEGREE OF THE TERM"<<endl;
        cin>>degree;
        
        poly2.insert(coeff,degree);

        cout<<"You want to add more terms and continue ? Press(Y) to continue."<<endl;
        cin>>op2;
        int calc=op.compare(op2);
        if(calc==0)
        {
            continue;
        }
        else
        {
            break;
        }

    }
    poly2.printpoly();

}