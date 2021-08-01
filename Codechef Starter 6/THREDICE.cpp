#include<bits/stdc++.h>
using namespace std;

const char nl = '\n';

int main(){
	int n;
	cin>>n;
	string s;
	float ans[n];
	float a,b;
	float sum;
	float f;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		sum = a+b;
		if(sum>6) {
			sum=6;
			//cout<<"hmm";
			}
		ans[i] = float((6-sum)/6);
		//printf("%0.6f",ans[i]);
	}
	for(int i=0;i<n;i++){
		if(ans[i]==0.000000)
			cout<<"0"<<"\n";
		else{
			//s = to_string(ans[i]);
			//s =  s.substr(0, s.size()-1);
			//cout<<s<<nl;
			printf("%0.6f\n",ans[i]);
			//cout<<setprecision(7)<<fixed<<to_string(ans[i])<<"\n";
		}
	}
    return 0;
}
