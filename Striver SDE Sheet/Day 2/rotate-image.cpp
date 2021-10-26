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
    void rotate(vector<vector<int>>& matrix) {
        int t=0;
        vector<vector<int>> viz(matrix.size() , vector<int> (matrix[0].size(), 0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if (!viz[i][j]){
                    t = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = t;
                    viz[i][j] = viz[j][i] = 1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
int main(){
    vector<vector<int>> matrix {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"original vector is---"<<endl;
    display(matrix);
    Solution sol;
    sol.rotate(matrix);            
    return 0;
}
