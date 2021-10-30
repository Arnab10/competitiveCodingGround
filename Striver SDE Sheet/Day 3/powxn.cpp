//https://leetcode.com/problems/powx-n/submissions/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        return pow(x,n);
    }
};

int main(){
    vector<vector<int>> matrix = {{1,3}};
    Solution sol;
    double x;
    int n;
    cin>>x;
    cin>>n;
    cout<<sol.myPow(x,n);      
    return 0;
}
