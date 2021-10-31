//https://www.codingninjas.com/codestudio/problems/count-inversions_615

#include<bits/stdc++.h>

using namespace std;

long long merge(long long *Arr, int start, int mid, int end) {
	long long temp[end - start + 1];							//create a temp array of same length
	int i = start, j = mid, k = start;
    long long count=0;					
	while((i <= mid-1) && (j <= end))							//splitting the array into [start->mid] & [mid+1 -> end]///i <= mid-1 only if merge() call is mid+1
		if(Arr[i] <= Arr[j])  
        {
            temp[k++] = Arr[i++];
            //k++,i++;
        }
		else {  
            /*cout<<"Arri->"<<Arr[i]<<" and arrj->"<<Arr[j]<<'\n';
            cout<<"i->"<<i<<" and j->"<<j<<'\n';*/
            //cout<<"ok"<<'\n';
            temp[k++] = Arr[j++];
            //k++,j++;
            count = count + (mid-i);
        }
	
	while(i <= mid-1) temp[k++] = Arr[i++];				//merge both arrays
	while(j <= end) temp[k++] = Arr[j++];
	for(i = start; i <= end; i += 1) Arr[i] = temp[i];                      //A starts with 'start' and Temp starts with 0, so i-start
    return count;
}

long long mergeSort(long long arr[],int low,int high){
    int mid;
    long long inv_count = 0;
	if(low<high){
		mid = low + (high-low)/2;
		inv_count += mergeSort(arr,low,mid);
		inv_count += mergeSort(arr,mid+1,high);
		inv_count += merge(arr,low,mid+1,high);
	}
    return inv_count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr,0,n-1);
    
}

int main(){
	unsigned int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long c = getInversions(arr,n);
    cout<<"ki holo";
    cout<<"The answer is "<<c<<'\n';
	/*for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}*/
	return 0;
}