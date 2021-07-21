////Grid Traveller Memorization
#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b) ? a : b
int maxSumPath(int m,int n,vector<vector<int>>& vec){
    int data = 0;
    if(m==0 || n == 0) return 0;
    if(m==1 && n==1) return vec[m-1][n-1];
    return max(vec[m-1][n-1] + maxSumPath(m-1,n,vec) , vec[m-1][n-1] + maxSumPath(m,n-1,vec));
}
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int m,n,val;
    cin>>m>>n;
    vector<vector<int>> vec;
    vector<int> data;
    cout<<"Enter weights"<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>val;
            data.push_back(val);
        }
        vec.push_back(data);
        data.clear();
    }
    cout<<maxSumPath(m,n,vec);
    return 0;
}