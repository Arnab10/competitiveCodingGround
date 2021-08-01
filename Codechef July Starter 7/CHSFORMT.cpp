#include<bits/stdc++.h>
using namespace std;

const char nl = '\n';

void solve(){
    int a,b;
	cin>>a;
	cin>>b;
	int sum = a+b;
	if(sum<3) cout<<1<<nl;
	else if (sum>=3 && sum<=10) cout<<2<<nl;
	else if (sum>=11 && sum <=60) cout<<3<<nl;
	else if (sum>60) cout<<4<<nl;
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