//https://www.codingninjas.com/codestudio/problems/count-inversions_615

#include <iostream>
using namespace std;

void merge(int *Arr, int start, int mid, int end) {
	int temp[end - start + 1];							//create a temp array of same length
	int i = start, j = mid+1, k = 0;					
	while(i <= mid && j <= end)							//splitting the array into [start->mid] & [mid+1 -> end]
		if(Arr[i] <= Arr[j])  
			temp[k++] = Arr[i++];
		else 
			temp[k++] = Arr[j++];
	
	while(i <= mid) temp[k++] = Arr[i++];				//merge both arrays
	while(j <= end) temp[k++] = Arr[j++];
	for(i = start; i <= end; i += 1) Arr[i] = temp[i - start];                      //A starts with 'start' and Temp starts with 0, so i-start
}

void mergeSort(int arr[],int low,int high){
	if(low<high){
		int mid = low + (high-low)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main(){
	unsigned int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	return 0;
}