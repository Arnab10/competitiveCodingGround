//detect bipartite graph using bfs traversal algorithm
/*Bipartite Graph : A graph in which if we traverse and color the adjacent nodes with alternate colors using only two distinct colors,
then there should not be any two adjacent node having same color */
#include<bits/stdc++.h>

using namespace std;

bool checkForbipartite(vector<int>adj[],int node,vector<int>& vis){
    queue<int>q;
    vis[node] = 1;
    q.push(node);

    while(!q.empty()){
        int n = q.front();
        q.pop();
        for(auto it : adj[n]){
            if(!vis[it]){
                q.push(it);
                vis[it] = vis[n]*-1;
            }
            else if(vis[it] == vis[n]){
                return false;
            }
        }
    }
    return true;
}

bool detectbipartite(vector<int>adj[],int V){
    vector<int> vis(V-1,0);

    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(!checkForbipartite(adj,i,vis))
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
