#include<bits/stdc++.h>
using namespace std;
const char nl = '\n';
void display(vector<int>& vec){
    for(auto i : vec) cout<<i<<" ";
    cout<<nl;
}

void solve(){
	int a,b;
    cin>>a>>b;
    int ans,k;
    if(a==b) ans = 0;
    else{
        if ((a+b)%2==0) k = 2;
        else k = 1;
        ans = (b-a + k)/2;
    }
    cout<<ans<<nl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin>>T; 
    while(T--)
        solve();
    return 0;
}