#include <cstring>
#include <iostream>
#include<bitset>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num]={};
    if(num%2==0){
    for(int i=0;i<num;i++)
        arr[i]=i+1;
    
    for(int j=0;j<num;j+=2){
        arr[j]+=arr[j+1];
        arr[j+1] = arr[j]-arr[j+1];
        arr[j] = arr[j] - arr[j+1];
    }
    for(int i=0;i<num;i++){
        cout<<arr[i];
        if(i!=(num-1)) cout<<" ";
        }
    }
    else cout<<"-1";
    return 0;
}