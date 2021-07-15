#include<bits/stdc++.h>
using namespace std;
void toggle(int (*p)[3],int i,int j){
    if(i<0 || j<0 || i>2 || j>2) return;
    else{
        p[i][j] = 1- p[i][j];
    }
}
int main()
{
    int arr[3][3]={{1,1,1},{1,1,1},{1,1,1}},input[3][3]={0},data=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        cin>>data;
        input[i][j] = data;
        input[i][j] = input[i][j]%2;
    }
    
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        if(input[i][j]==1){
            toggle(arr,i,j);
            toggle(arr,i-1,j);
            toggle(arr,i,j-1);
            toggle(arr,i+1,j);
            toggle(arr,i,j+1);
 
        }
    }
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j];
        }
    cout<<endl;
    }
    
    return 0;
}