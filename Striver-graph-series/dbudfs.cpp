//detect bipartite graph using dfs traversal algorithm
/*Bipartite Graph : A graph in which if we traverse and color the adjacent nodes with alternate colors using only two distinct colors,
then there should not be any two adjacent node having same color */

#include<bits/stdc++.h>

using namespace std;

bool checkForBipartite(vector<int> adj[],int node, vector<int>& vis){
    for(auto it : adj[node]){
        if(!vis[it]){
            vis[it] = vis[node]*-1;
            if(!checkForBipartite(adj,it,vis))
                return false;
        }
        else if(vis[it] == vis[node]){
            return false;
        }
    }
    return true;
}

bool detectbipartite(vector<int>adj[],int V){
  vector<int> vis(V+1,0);
  for(int i=0;i<V;i++){  //loop to catch disconnected components
    if(!vis[i]){
        vis[i] = 1;
      if(!checkForBipartite(adj,i,vis))
        return false;
    }
  }
    return true;
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

  bool ans = detectbipartite(adj,n);
  //printAns(ans);
  cout << ans;

  return 0;
}
