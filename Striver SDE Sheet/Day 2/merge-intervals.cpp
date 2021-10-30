//https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>&matrix){
    for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j]<<" ";
            }
        cout<<endl;
    }
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        temp = intervals[0];
        for(auto it : intervals){
            if(it[0]<=temp[1]){
                temp[1] = max(it[1],temp[1]);
            }
            else{
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};

int main(){
    vector<vector<int>> matrix {{1,3},{2,6},{8,10},{15,18}};
    cout<<"original vector is---"<<endl;
    display(matrix);
    Solution sol;
    sol.merge(matrix);      
    return 0;
}
