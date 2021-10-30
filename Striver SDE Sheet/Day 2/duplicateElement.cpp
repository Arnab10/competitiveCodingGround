//https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> maps;
        for(int i=0;i<nums.size();i++){
            if(maps[nums[i]] == 1) return nums[i];
            maps[nums[i]]++;
        }
        return -1;
    }
};

int main(){
    vector<int> matrix {1,3,4,2,2};
    Solution sol;
    cout<<sol.findDuplicate(matrix);      
    return 0;
}
