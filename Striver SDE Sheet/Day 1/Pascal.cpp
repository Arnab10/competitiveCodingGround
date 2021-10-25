#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> semiGen(vector<int>&vec){
    vector<int> returns;
    returns.push_back(1);
    for(int i=0;i<vec.size()-1;i++){
        returns.push_back(vec[i]+vec[i+1]);
    }
    returns.push_back(1);
    return returns;
}
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> mems;
        map<int,vector<int>> maps;
        maps[1] = {1};
        maps[2] = {1,1};
        maps[3] = {1,2,1};
        maps[4] = {1,3,3,1};
        //cout<<"size is"<<maps[5].size();
        for(int i=1;i<=numRows;i++){
            if(maps[i].size()>0)
                pascal.push_back(maps[i]);
            else{
                maps[i] = semiGen(maps[i-1]);
                pascal.push_back(maps[i]);
            }
        }
        //cout<<"size is"<<maps[5];
        return pascal;
}

};