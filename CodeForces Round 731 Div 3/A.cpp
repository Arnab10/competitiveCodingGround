#include<bits/stdc++.h>

using namespace std;

int linear_distance(pair<int,int>&p1,pair<int,int>&p2){
	return sqrt(pow((p1.first-p2.first),2) + pow((p1.second-p2.second),2));
}

bool obstacle_between(pair<int,int>&A,pair<int,int>&F,pair<int,int>&B){
	bool res = ((((A.first==F.first)&&(F.first==B.first))||((A.second==F.second)&&(F.second==B.second))) &&(linear_distance(A,F)+linear_distance(F,B)==linear_distance(A,B)));
	return res;
}
int linear(pair<int,int>&p1,pair<int,int>&p2){
	return (abs(p1.first-p2.first) + abs(p1.second-p2.second));
}
void solve(){
	pair<int,int> A,B,F;
	int data;
	cin>>data; A.first = data;
	cin>>data; A.second = data;
	cin>>data; B.first = data; 
	cin>>data; B.second = data;
	cin>>data; F.first = data;
	cin>>data; F.second = data;
	if(!obstacle_between(A,F,B))
		cout<<linear(A,B)<<"\n";
	else{
		cout<<(linear(A,B) + 2)<<"\n";
	}
		
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