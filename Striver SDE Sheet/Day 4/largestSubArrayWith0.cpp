//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1#
///Arnab
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        // Your code here
        int sum=10,len=0;               //initially let any value be sum, except 0.
        unordered_map<int,int> maps;
        maps[10] = -1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(maps.find(sum)!=maps.end()){
                len = max(len,i-maps[sum]);
                continue;
            }
            maps[sum] = i;
        }
        return len;
    }
};

int main(){
    vector<int> vec = {15,-2,2,-8,1,7,10,23};
    Solution sol;
    cout<<sol.maxLen(vec,4);
    return 0;
}