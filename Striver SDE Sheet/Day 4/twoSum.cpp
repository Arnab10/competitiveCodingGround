//https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; 
        unordered_map<int, int> mpp; 
        for(int i = 0;i<nums.size();i++) {
            if(mpp.find(target - nums[i]) != mpp.end())
                return {mpp[target-nums[i]],i}; 
            mpp[nums[i]] = i; 
        }
        return ans; 
    }
};

int main(){
	int n,target;
	cin>>n;
	cin>>target;
	vector<int> vec;
	vector<int> pair;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		vec.push_back(data);
	}
	Solution sol;
	pair = sol.twoSum(vec,target);
	cout<<pair[0]<<" and "<<pair[1];
	return 0;
}
