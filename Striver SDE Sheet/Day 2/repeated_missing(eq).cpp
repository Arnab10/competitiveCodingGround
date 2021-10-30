//https://www.interviewbit.com/problems/repeat-and-missing-number-array/submissions/
//another approach : https://www.youtube.com/watch?v=5nMGY4VUoRY&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=4
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> repeatedNumber(const vector<int> &A) {
    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    return {int(repeating),int(missingNumber)};  
}  
};


int main(){
    vector<int> vec = {3,1,2,5,3};
    Solution s;
    vector<int> ans = s.repeatedNumber(vec);
    cout<<ans[0]<<"--"<<ans[1];
    return 0;
}
