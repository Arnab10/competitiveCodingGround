#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> cords;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    cords.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<cords.size();i++){
            for(int a=0;a<matrix.size();a++){
                matrix[a][cords[i].second] = 0;
            }
            for(int a=0;a<matrix[0].size();a++){
                matrix[cords[i].first][a] = 0;
            }
        }
    }
};