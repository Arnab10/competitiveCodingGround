#include<bits/stdc++.h>
using namespace std;
const char nl = '\n';

int xorx(vector<int>&a,int max){
	int acc = 0;
	int exp = 0;
	for(int i=0;i<a.size();i++){
		exp = a[i]^max;
		acc = acc | exp;
	}
	return acc;
}

void solve(){
    int n,data;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>data;
		arr.push_back(data);
	}
	int max = *max_element(arr.begin(),arr.end());
	cout<<max<<" "<<xorx(arr,max)<<nl;

	
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