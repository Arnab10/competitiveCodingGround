#include<bits/stdc++.h>
using namespace std;
const char nl = '\n';


void histogram(){
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	map<int,int> histogram;
	for(int i=0;i<n;i++){
		histogram[arr[i]]++;
	}
	for(auto it=histogram.begin();it!=histogram.end();it++){
		cout<<it->first<<"->"<<it->second<<nl;
	}
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin>>T;
    while(T--)
        histogram();
    return 0;
}