#include<bits/stdc++.h>
using namespace std;
const char nl = '\n';


void solve(){
    int a,b,c;
	cin>>a; cin>>b; cin>>c;
	vector<int> vec = {a,b,c};
	sort(vec.begin(),vec.end(),greater<int>());
	cout<<(*vec.begin() + *(vec.begin()+1))<<nl;
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