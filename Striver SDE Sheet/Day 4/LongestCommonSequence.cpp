#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxseq = 1,numsize = nums.size(),temp=1;
        if(numsize==0) return 0;
        for(int i=0;i<numsize-1;i++){
            if (nums[i+1] != nums[i]) {
                if(nums[i]+1 == nums[i+1]) temp++;
                else{
                    maxseq = max(maxseq,temp);
                    temp = 1;
                }
            }
        }
        return max(maxseq,temp);
    }
};

int main(){
    vector<int> vec = {0,3,7,2,5,8,4,6,0,1};
    Solution sol;
    cout<<sol.longestConsecutive(vec);
    return 0;
}