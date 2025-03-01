#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Graph
{
    public:
    int vertices;
    vector <vector<int>> adj_list;

    Graph(int x)
    {
        vertices=x;
        adj_list.resize(x);

    }

    void InsertEdge(int a, int b)
    {
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }

    void display_vertices(int y)
    {
        cout<<"adjacent nodes of node "<<y<<": ";
        for(auto j: adj_list[y])
        {
                cout<<j<<" ";
        }

            cout<<endl;
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
                cout<<j<<endl;
                is_visited[j]=true;
                visit_check.pop();
                

            }


        }

    }

};

int main()
{

    Graph g1(5);
    g1.InsertEdge(0,1);
    g1.InsertEdge(0,2);
    g1.InsertEdge(0,3);
    g1.InsertEdge(0,4);
    g1.InsertEdge(0,5);
    g1.display_vertices(0);


}
