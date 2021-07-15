#include<iostream>
using namespace std;
int main(){
    char str[1001];
    cin.getline(str,1001);
    if(islower(str[0])) str[0] = str[0] - 32;
    cout<<str;
    return 0;
}