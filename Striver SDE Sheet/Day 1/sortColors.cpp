#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> hist;
        int t=0,c=0;
        for(int i=0;i<nums.size();i++) hist[nums[i]]++;
        for(auto j : hist){
            t = j.second;
            while(t--)
                nums[c++] = j.first;
        }
    }
};