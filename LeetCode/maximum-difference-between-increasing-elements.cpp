//https://leetcode.com/problems/maximum-difference-between-increasing-elements/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDif = 0;
        int minElem = INT_MAX;
        for(int i=0;i<nums.size();i++){
            minElem = min(minElem,nums[i]);
            maxDif = max(maxDif,nums[i]-minElem);
        }
        return (maxDif) = maxDif ? maxDif : -1;
    }
};
