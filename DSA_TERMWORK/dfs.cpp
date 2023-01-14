#include<bits/stdc++.h>
using namespace std;
class graph{
    int vertices;
    map<int, list<int>> adj;
public:    
    graph(int v){
        vertices=v;
    }
    // Function to insert an edge in the graph
    void insertedge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
    }
    
    void helper(int u,bool visited[]){
        visited[u]=true;
        cout<<u<<endl;
        for(int v: adj[u]){
            if(!visited[v])
            {
                helper(v,visited);
            }
        }
    }
    void dfs(int u){
        bool visited[vertices];
        helper(u,visited);
    }
};
int main(){
    graph g(5);

    g.insertedge(0,2);
    g.insertedge(1,3);
    g.insertedge(1,4);
    g.insertedge(1,2);
    g.insertedge(2,3);
    g.insertedge(2,5);
    g.insertedge(3,2);
    g.insertedge(3,6);
    cout<<"The DFS traversal starting from node 0 is -";
    g.dfs(0);
    return 0;
}
