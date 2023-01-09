#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
        for(int i=1;i<numRows;i++){
            vector<int> row;
            for(int j=0;j<=ans[i-1].size();j++){
                if(j==0 || j==ans[i-1].size()){
                    row.push_back(1);
                }
                else{
                    row.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            ans.push_back(row);
        }
        return ans;
    }
};