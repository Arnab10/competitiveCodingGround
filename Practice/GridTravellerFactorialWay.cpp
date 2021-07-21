////Grid Traveller Memorization
#include<bits/stdc++.h>
using namespace std;

unsigned long long int factorial(int m,map<int,unsigned long long int>& table){
    unsigned long long int data = 0;
    map<int,unsigned long long int>::iterator it = table.find(m);
    if(it!=table.end()) return it->second;
    if(m==0 || m == 1) return 1;
    data = m * factorial(m-1,table);
    table.insert(make_pair(m,data));   
    return data;
}
unsigned long long int solve(int m,int n){
    map<int,unsigned long long int> table;
    int a = factorial(m+n-2,table), b = factorial(m-1,table),c = factorial(n-1,table);
    //cout<<a<<"->"<<b<<"->"<<c;
    return a/(b*c);
}
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int m,n;
    cin>>m>>n;
    cout<<solve(m,n);
    //map<int,unsigned long long int> table;
    //cout<<factorial(m,table);
    return 0;
}


