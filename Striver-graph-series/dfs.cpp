//BFS traversal without disconnected components

#include<bits/stdc++.h>
using namespace std;

void traversal(vector<int> adj[],int node, vector<int>& vis,vector<int>& dfs){
    vis[node] = 1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it]){
            vis[it] = 1;
            traversal(adj,it,vis,dfs);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]){
  vector<int> dfs;
  vector<int> vis(V+1,0);
  for(int i=1;i<=V;i++){  //loop to catch disconnected components
    if(!vis[i]){
      traversal(adj,i,vis,dfs);
    }
  }
return dfs;
}

void addEdge(vector < int > adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printAns(vector < int > & ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}
int main() {
  vector<int> adj[6];
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,1,5);
    addEdge(adj,2,4);
    addEdge(adj,2,1);
    addEdge(adj,3,1);
    addEdge(adj,4,1);
    addEdge(adj,4,2);
    addEdge(adj,5,1);

  vector < int > ans = dfsOfGraph(5, adj);
  printAns(ans);
  cout << endl;

  return 0;
}