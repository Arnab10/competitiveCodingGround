#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,sum=0,data;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>data;
        sum+=data;
    }
    cout<<setprecision(12)<<fixed<<float(sum)/float(num);
    return 0;
}