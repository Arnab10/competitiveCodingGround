#include<bits/stdc++.h>
using namespace std;

vector<int> dfsOfGraph(int V, vector<int> adj[]){
    vector<int> bfs;
    vector<int> 

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
  vector < int > adj[5];

  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 2, 4);

  vector < int > ans = bfsOfGraph(5, adj);
  printAns(ans);
  cout << endl;

  return 0;
}