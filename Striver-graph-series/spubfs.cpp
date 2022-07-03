//Find shortest path of undirected graph uing BFS algorithm.
#include<bits/stdc++.h>

using namespace std;

void shortestDistance(vector<int> adj[],int n,int src){
    queue<int> q;
    vector<int> dist(n+1,INT_MAX);
    dist[src]=0;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(dist[node]+1 <dist[it]){
                dist[it] = dist[node]+1;
                q.push(it);
            }
        }

    }

    for(int i = 0;i<n;i++) cout << dist[i] << " "; 
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
  vector<int> adj[9];
   
    int n;
    cin>>n;
    int a,b;
    for(int i{};i<n;i++){
        cin>>a>>b;
        addEdge(adj,a,b);
    }

   shortestDistance(adj,n,0);
  //printAns(ans);

  return 0;
}
