#include<bits/stdc++.h>
using namespace std;

int maxof(int *arr,int s,int l){
	if((l-s)==1)
		return max(arr[s],arr[l]);
	int mid = s + (l-s)/2;
	return max(maxof(arr,s,mid),maxof(arr,mid+1,l));
}

int main(){
	int arr[8] = {1,5,6,34,8,99,98,67};
	cout<<maxof(arr,0,7);
    return 0;
}