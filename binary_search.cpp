#include <iostream>

using namespace std;

int binarySearch(int *p,int low, int high,int key);
int main()
{
	int arr[] = {2,3,4,5,6,7,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	cout<<"Enter the key to find";
	cin>>key;
	int index = binarySearch(arr,0,n-1,key);
	cout<<"Value found at index->"<<index;
	return 0;
}
int binarySearch(int *p,int low, int high,int key){
	int mid = low + (high-low)/2;
	if(p[mid]==key) 
		return mid;
	else if (p[mid]>key)
		return binarySearch(p,low,mid,key);
	else 
		return binarySearch(p,mid+1,high,key);
}
