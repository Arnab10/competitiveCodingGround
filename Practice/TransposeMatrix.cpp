//Just transpose a Matrix(Better approach)

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
    void transpose(vector<vector<int>>& m) {
        int n = m.size();
        
        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++)
                swap(m[i][j], m[j][i]);
    }
};

int main(){
    vector<vector<int>> matrix {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"original vector is---"<<endl;
    display(matrix);
    Solution sol;
    sol.transpose(matrix);            
    return 0;
}
