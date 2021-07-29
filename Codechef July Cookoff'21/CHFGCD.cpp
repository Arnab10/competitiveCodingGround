#include<bits/stdc++.h>
using namespace std;
const char nl = '\n';


void solve(){
    int a,b;
	cin>>a;
	cin>>b;
	int count = 0;
	if(__gcd(a,b)>1)
		count=0;
	else{
			if(__gcd(a+1,b)>1)
				count=1;
				else if(__gcd(a,b+1)>1)
					count=1;
				else if(__gcd(a+1,b+1)>1)
					count=2;
		}
	
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