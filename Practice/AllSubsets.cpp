//QuickSort Algorithm
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
void printAllSubset(vector<int>& arr, int i, vector<int>&out){
	if(i==arr.size())
	{
		printv(out);
		return;
	}	
	out.push_back(arr[i]);
	printAllSubset(arr,i+1,out);
	out.pop_back();
	printAllSubset(arr,i+1,out);
}

int main()
{
	vector<int> arr = {1,2,3,4};
	vector<int> out;
	//printv(arr);
	printAllSubset(arr, 0, out);
	//printAllSubsets(arr, 0, "");
	//printv(arr);
	return 0;
}