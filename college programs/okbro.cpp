/*Write  a cpp program to traverse from a given node in a graph using stack
HINT:

                 0--1
                 |  |
              4--2  3--5
  

SAMPLE OUTPUT:
Adjacent nodes of node 0: 1 2 4 3 5 
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Graph
{
    public:
    int vertices;
    vector <stack<int>> adj_list;

    Graph(int x)
    {
        vertices=x;
        adj_list.resize(x);

    }

    void InsertEdge(int a, int b)
    {
        adj_list[a].push(b);
        adj_list[b].push(a);

    }
    /*
    void display_vertices()
    {
        for(int i=0;i<vertices;i++)
        {
            cout<<"vertex : "<<i;
            cout<<"  connected to : ";
            for(auto j: adj_list[i])
            {
                cout<<j<<",";
            }

            cout<<endl;
        }

    }
    */

    void display_adjacent_vertices(int vertex)
    {
        
        while(!adj_list[vertex].empty())
        {
            int z=adj_list[vertex].pop();
            cout<<z<<endl;
        }
    }

    void traversal()
    {
        queue <int> visit_check;
        vector <bool> is_visited;

        is_visited.resize(vertices);
        for(int i=0;i<vertices;i++)
        {
            is_visited[i]=false;
        }


        for(int j=0;j<vertices;j++)
        {
            if(is_visited[j]!=true)
            {
                visit_check.push(j);
                is_visited[j]=true;
                visit_check.pop();
                

            }


        }

    }

};

int main()
{

    Graph g1(5);
    g1.InsertEdge(0,5);
    g1.InsertEdge(0,4);
    g1.InsertEdge(0,3);
    g1.InsertEdge(0,2);
    g1.InsertEdge(0,1);
    g1.display_adjacent_vertices(0);


}
