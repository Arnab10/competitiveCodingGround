//Added by Arnab
#include<iostream>
using namespace std;

int max(int a,int b);
int max(int a,int b,int c); 
int maxsum(int *arr,int low,int high);
int maxcrosssum(int *arr,int low,int mid,int high);

int main()  
{  
int arr[] = {-2, 5, 4, -2, -4, 1, 5, -6};
cout<<maxsum(arr,0,*(&arr + 1) - arr-1);
return 0;  
} 

int max(int a,int b,int c){
    return max(a,b) > c ? max(a,b) : c;
}
int max(int a,int b){
    return (a > b) ? a : b;
}
int maxsum(int arr[],int low,int high){
    if(low==high)
        return arr[low];
    int mid = low + ((high-low)/2);

    return max(maxsum(arr,low,mid),maxsum(arr,mid+1,high),maxcrosssum(arr,low,mid,high));
}
int maxcrosssum(int *arr,int low,int mid,int high){
    int left_sum = INT8_MIN,right_sum = INT8_MIN,sum=0;
    for(int i=mid+1;i<=high;i++){
        sum += arr[i];
        if(sum>left_sum) left_sum = sum;
    }
    sum = 0;
    for(int i=low;i<=mid;i++){
        sum += arr[i];
        if(sum>right_sum) right_sum = sum;
    }
    return max(left_sum,right_sum,left_sum+right_sum);   
}
