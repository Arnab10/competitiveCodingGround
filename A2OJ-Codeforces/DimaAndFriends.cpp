#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,data = 0;
    cin>>n;
    string command[n];
    for(int i=0;i<n;i++){
        cin>>command[i];
        cin.ignore();
    }
    for(int i=0;i<sizeof(command)/sizeof(command[0]);i++){
        if(command[i]=="++X"){
            ++data;
        }
        else if(command[i]=="X++"){
            data++;
        }
        else if(command[i]=="--X"){
            --data;
        }
        else if(command[i]=="X--"){
            data--;
        }
    }
    cout<<data;
    return 0;
}