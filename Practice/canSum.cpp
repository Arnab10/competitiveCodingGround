////canSum Memorization
#include<bits/stdc++.h>
using namespace std;

bool canSum(int target,vector<int>& arr,int n,map<int,bool>& table){
    bool bln;
    if(target==0) return true;
    if(target<0) return false;
    for(int i=0;i<n;i++){
        int remainder = target - arr[i];
        if(table.find(remainder)!=table.end()){
            bln = (table.find(remainder))->second;
            return bln;
        }
        bln = canSum(remainder,arr,n,table);
        table.insert({remainder,bln});
        if(bln) return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int target,data,n;
    cin>>n;
    cin>>target;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>data;
        arr.push_back(data);
    }
    map<int,bool> table;
    cout<<canSum(target,arr,n,table);
    return 0;
}