#include <vector>
#include<iostream>
#include<numeric>
using namespace std;

int main()
{
    int k,l,m,n,d,count = 0;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=1;i<=d;i++) 
        if((i%k == 0) || (i%l == 0) || (i%m == 0) || (i%n == 0)) count++;    
    cout<<count;
    
    return 0;
}