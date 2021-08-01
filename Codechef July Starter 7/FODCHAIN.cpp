#include<bits/stdc++.h>
using namespace std;

const char nl = '\n';

void solve(){
    int a,b;
	cin>>a;
	cin>>b;
	int count=0;
	do{
		a=a/b;
		count++;
	}while(a>0);
	cout<<count<<nl;
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