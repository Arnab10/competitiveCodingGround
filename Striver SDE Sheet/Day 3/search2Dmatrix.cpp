//https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        if (matrix[0][0]==target) return true; 
        return binary_s(matrix,0,rows*cols-1,target,cols);
    }
    bool binary_s(vector<vector<int>>& matrix, int low, int high,int target,int cols){
        //cout<<"dhuklo"<<low<<","<<high<<endl;
        int mid = low + (high-low)/2;
        //cout<<mid<<endl;
        if(matrix[mid/cols][mid%cols]==target) return true;
        if(low==high) return false;
        else if(matrix[mid/cols][mid%cols]>target) return binary_s(matrix,low,mid,target,cols);
        else if (matrix[mid/cols][mid%cols]<target) return binary_s(matrix,mid+1,high,target,cols);
        return false;
    }
};

int main(){
    vector<vector<int>> matrix = {{1,3}};
    Solution sol;
    cout<<sol.searchMatrix(matrix,12);      
    return 0;
}
