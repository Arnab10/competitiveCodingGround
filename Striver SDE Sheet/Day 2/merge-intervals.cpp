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
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0) {
            return mergedIntervals; 
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0]; 
        
        for(auto it : intervals) {
            if(it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]); 
            } else {
                mergedIntervals.push_back(tempInterval); 
                tempInterval = it; 
            }
        }
        mergedIntervals.push_back(tempInterval);
        display(mergedIntervals);
        return mergedIntervals; 
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
