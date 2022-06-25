//detect cycle using dfs traversal algorithm
#include<bits/stdc++.h>

using namespace std;

bool detectcycle(vector<int> adj[],int node, int parent, vector<int>& vis,vector<int>& dfs){
    vis[node] = 1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it]){
            vis[it] = 1;
            if(detectcycle(adj,it,node,vis,dfs))
                return true;
        }
        else if(it != parent){
            return true;
        }
    }
    return false;
}

bool checkForCycle(vector<int>adj[],int V){
  vector<int> dfs;
  vector<int> vis(V+1,0);
  for(int i=0;i<V;i++){  //loop to catch disconnected components
    if(!vis[i]){
      if(detectcycle(adj,i,-1,vis,dfs))
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
  int V = 5;
  int E = 5;
  vector < int > adj[V];

  adj[0].push_back(1);
  adj[1].push_back(0);

  adj[1].push_back(2);
  adj[2].push_back(1);

  adj[1].push_back(4);
  adj[4].push_back(1);

  adj[4].push_back(3);
  adj[3].push_back(4);

  adj[2].push_back(3);
  adj[3].push_back(2);

  bool ans = checkForCycle(adj,5);
  //printAns(ans);
  cout << ans;

  return 0;
}
