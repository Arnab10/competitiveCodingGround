//https://leetcode.com/problems/majority-element-ii/submissions/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> maps;
        int n = nums.size();
        vector<int> vec;
        n /= 3;
        for(int i=0;i<nums.size();i++){
            maps[nums[i]]++;
            if(maps[nums[i]]==n+1) vec.push_back(nums[i]);
        }
        return vec;
    }
};

int main(){
    vector<int> matrix = {2,2,1,1,1,2,2};
    Solution sol;
    vector<int> ans = sol.majorityElement(matrix);   
    for(auto it : ans){
        cout<<it;
    }   
    return 0;
}
