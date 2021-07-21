////Grid Traveller Memorization
#include<bits/stdc++.h>
using namespace std;

long long int gridTraveller(int m,int n,map<pair<int,int>,long long int>& grid){
    long long int data = 0;
    map<pair<int,int>,long long int>::iterator it = grid.find(make_pair(m,n));
    if(it!=grid.end()) return it->second;
    if(m==0 || n == 0) return 0;
    if(m==1 && n==1) return 1;
    data = gridTraveller(m-1,n,grid) + gridTraveller(m,n-1,grid);
    grid.insert({make_pair(m,n),data});
    return data;
}
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int m,n;
    cin>>m>>n;
    map<pair<int,int>,long long int> grid;
    cout<<gridTraveller(m,n,grid);
    return 0;
}


