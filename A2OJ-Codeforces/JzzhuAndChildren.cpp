#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,candy,i=0;
    cin>>n;
    cin>>candy;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(true){
        if((candy-arr[i%n])<0){
            arr[i%n] = arr[i%n] - candy;
        }
        else{
            arr[i%n] = 0;
        }
        if(accumulate(arr,arr+n,0)==arr[i%n]){
            break;
        }
        i++;
    }
    cout<<(i%n) +1;
    return 0;
}



 