//BFS traversal with & without disconnected components BETTER APPROACH

#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]){
  vector<int> bfs;
  vector<int> vis(V+1,0);
  for(int i=0;i<V;i++){
    if(!vis[i]){
      queue<int> q;
      q.push(i);
      vis[i]=1;

      while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it : adj[node]){
          if(!vis[it]){
            vis[it]=1;
            q.push(it);
          }
        }
      }
    }
  }
return bfs;

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
  vector < int > adj[7];
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 2, 4);
  addEdge(adj, 5, 6);
  vector < int > ans = bfsOfGraph(7, adj);
  printAns(ans);
  cout << endl;

  return 0;
}