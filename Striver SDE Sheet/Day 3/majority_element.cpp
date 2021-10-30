//https://leetcode.com/problems/majority-element/submissions/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> maps;
        int n = nums.size();
        n /= 2;
        for(int i=0;i<nums.size();i++){
            maps[nums[i]]++;
            if(maps[nums[i]]>n) return nums[i];
        }
        return -1;
    }
};

int main(){
    vector<int> matrix = {2,2,1,1,1,2,2};
    Solution sol;
    cout<<sol.majorityElement(matrix);      
    return 0;
}
