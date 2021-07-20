////Bracket Matching
#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string ss){
    stack<char> word;
    char reference = '(';
    for(auto i : ss){
        if(i==reference)
            word.push(i);
        else if(i==')'){
            if(word.empty()){
                return false;
            }
            word.pop();
        }
    }
    if(word.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);
    string ss;
    cin>>ss;
    if(isBalanced(ss)) cout<<"Balanced";
    else cout<<"not Balanced";
    return 0;
}


