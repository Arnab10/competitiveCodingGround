////Fibonacci Memorization
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

long long int Fibo(int term,long long int *store){
    int data = 0;
    if(term<=2){
        return 1;
    }
    if(store[term-1]!=0){
        return store[term-1];
    }
    store[term-1] = Fibo(term-1,store) + Fibo(term-2,store);
    return store[term-1];
}
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    int term;
    cin>>term;
    long long int store[term]={0};
    cout<<Fibo(term,store);
    return 0;
}


