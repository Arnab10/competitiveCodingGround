#include<bits/stdc++.h>
using namespace std;
#define redAlert(x,h) (x>h) ? true : false 
const char nl = '\n';

int saturate(int num){
	if(num<0)
		return 0;
	return num;
}

void solve(){
    int n,d,h,sum=0;
	string output = "NO";
	cin>>n; cin>>d; cin>>h;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	for(int i=0;i<n;i++){
		if(arr[i]<=0){
			sum = sum - d;
			if(sum<0) sum = 0;
		}
		else{
			sum = sum + arr[i];
			if(sum>h){
				output = "YES";
				break;
			}
		}
	}
	cout<<output<<nl;

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