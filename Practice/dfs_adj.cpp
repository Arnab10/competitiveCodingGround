#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+2;
bool vis[N];
vector<int> adj[N]; ///adjacency matrix

void dfs(int node)
{
    //preorder
    vis[node] = true; 
    

    //inorder
    vector<int> ::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(!vis[*it]){
            dfs(*it);
        }
    }

    //postorder
    

}

int main()
{
    for(int i=0;i<N;i++) vis[i] = false;

    int m,n;
    cin>>m>>n;
    
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    return 0;
}