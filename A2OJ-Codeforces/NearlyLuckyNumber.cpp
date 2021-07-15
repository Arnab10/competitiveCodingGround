#include<bits/stdc++.h>
#define islucky(x) (x==4 || x==7) ? true : false
typedef unsigned long long ll;

void processor(ll num);
using namespace std;

int main()
{
    ll num;
    cin>>num;
    processor(num);
    return 0;
}
void processor(ll num){
    int sum = 0;
    while(num){
        if(islucky(num%10)) sum++;
        num/=10;
    }
    if(islucky(sum)) cout<<"YES";
    else cout<<"NO";
}