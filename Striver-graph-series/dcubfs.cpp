//detect cycle using bfs traversal algorithm
#include<bits/stdc++.h>

using namespace std;

bool checkForCycle(vector<int>adj[],int node,vector<int>& vis, int V){
    queue<pair<int,int>>q;
    vis[node] = 1;
    q.push({node,-1});

    while(!q.empty()){
        int n = q.front().first;
        int pn = q.front().second;
        q.pop();

        for(auto it : adj[n]){
            if(!vis[it]){
                q.push({it,n});
                vis[it] = 1;
            }
            else if(it != pn){
                return true;
            }
        }
    }
    return false;
}

bool cycledetected(vector<int>adj[],int V){
    vector<int> vis(V-1,0);

    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(checkForCycle(adj,i,vis,V))
                return true;
        }
    }
    return false;
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
  vector<int> adj[5];
   
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,1,3);
    addEdge(adj,2,4);

  bool ans = cycledetected(adj,5);
  //printAns(ans);
  cout << ans;

  return 0;
}
