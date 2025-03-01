// implementing BFS in a graph
#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

class Graphe
{
    public:

    vector<<vector<int>> adj_lis;

    int vertices;
    Graphe(int x)
    {
        vertices=x;
        adj_lis.resize(x);
    }

    void enter_vertices()
    {
        cout<<"Enter the vertices of the graph : "<<endl;
        
        for (auto i : adj_lis)
        {
            int xem;
            cin>>xem;
            i.first=xem;
        }
    }

    void insertEdge(int a, int b)
    {
        adj_lis[a].second.push_back(b);
        adj_lis[b].second.push_back(a);

    }

    void print_graph()
    {
        for (auto &it : adj_lis)
        {
            cout<<"Edge : "<<it.first<<endl;
            cout<<"connected to : ";
            for (auto &j : it.second)
            {
                cout<<j<<" ";
            }

        cout<<endl;
        }
    }


};


int main()
{
    Graphe g(3);
    g.enter_vertices();
    g.insertEdge(2,3);
    g.insertEdge(2,4);
    g.insertEdge(1,5);
    g.insertEdge(1,2);
    g.insertEdge(3,2);
    g.insertEdge(3,4);
    g.insertEdge(3,3);
    g.print_graph();
}