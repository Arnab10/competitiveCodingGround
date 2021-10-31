//https://leetcode.com/problems/4sum/submissions/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans,temp;
        vector<vector<int>> rec;
        map<vector<int>,int> mapp;
        long long n = nums.size();
        for(long long i=0;i<n;i++){
            for(long long j = i+1;j<n;j++){
                for(long long k = j+1; k<n;k++){
                    if(binary_search(nums.begin()+k+1,nums.end(),target-nums[i]-nums[j]-nums[k])){
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[k]);
                        ans.push_back(target-nums[i]-nums[j]-nums[k]);
                        temp = ans;
                        sort(temp.begin(),temp.end());
                        if(mapp[temp]==0){
                            rec.push_back(ans);
                            mapp[temp]++;    
                        }   
                        ans.clear();
                        temp.clear();
                        }
                    }
                }
            }
        return rec;
        } 
};