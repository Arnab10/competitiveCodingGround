#include<bits/stdc++.h>
//#define abs(a) (a>=0) ? a : -1*a
using namespace std;

bool check(int num){
    int d ,i=0;
    int ar[4],count[4]={0};
    while(num){
        d = num%10;
        ar[i] = d;
        i++;
        num = num/10;
        //cout<<endl<<d;
        //getchar();
    }

    for(int j=0;j<4;j++){
        if(ar[0] == ar[j]) count[0]++;
        if(ar[1] == ar[j]) count[1]++;
        if(ar[2] == ar[j]) count[2]++;
        if(ar[3] == ar[j]) count[3]++;
    }

    for(int j=0;j<4;j++){
       //cout<<endl<<"the count of "<<j<<"is-->"<<count[j]<<endl;
        if(count[j]>1) return false;
    }
    return true;
}
int main()
{
    int year;
    cin>>year;
    year++;
    //cout<<endl<<"truth or dare-->>"<<check(year);
    while(true){
        //cout<<year;
        if(check(year)) break;
        year++;
    }
    cout<<year;
    return 0;
}