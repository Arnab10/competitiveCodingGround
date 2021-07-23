#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n,k=0;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		k = k | x;
		cout<<(k^x)<<" ";
	}
	cout<<"\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin>>T;
    while(T--){
		solve();
	}
    return 0;
}