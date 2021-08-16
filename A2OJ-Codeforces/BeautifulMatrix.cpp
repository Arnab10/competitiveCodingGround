#include<iostream>
//#define abs(a) (a>=0) ? a : -1*a
//arnab
using namespace std;

int abs(int x){
    if(x>=0) return x;
    else return -1*x;
}
int main()
{
    int data,x,y;
    for(int j=1;j<=5;j++)
    for(int i=1;i<=5;i++){
        cin>>data;
        if(data==1){
            x = i;
            y = j;
        }
    }
    cout<<(abs(abs(x-3) + abs(y-3))) ;
    return 0;
}