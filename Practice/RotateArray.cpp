//array reverse
#include <bits/stdc++.h>
using namespace std;


void printv(vector<int>& vec){
	cout<<"{ ";
	for(int i=0;i<vec.size();i++){
		cout<<vec[i];
		if(i!=vec.size()-1)
			cout<<" , ";
	}
	cout<<"}"<<"\n";
}
void rotate(vector<int>& vec, int k){
	k = k%vec.size();
	reverse(vec.begin(),vec.end());
	reverse(vec.begin(),vec.begin()+k);
	reverse(vec.begin()+k,vec.end());
	printv(vec);
}
int main()
{
	vector<int> arr = {1,2,3,4,5,6,7,8};
	int k=2;
	rotate(arr, k);
	return 0;
}