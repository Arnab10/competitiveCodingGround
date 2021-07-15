#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,ctr = 0;
    char str[51],prevElem;
    cin>>num;
    cin.ignore();
    cin.getline(str,51);
    for(int i=0;str[i]!='\0';i++){
        if(i!=0) prevElem = str[i-1];
        if(prevElem == str[i]) ctr++;
    }
    cout<<ctr;
return 0;
}