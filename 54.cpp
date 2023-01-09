#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i,top=0,left=0,bottom=m-1,right=n-1;
        vector<int> ans;
        while(top<=bottom && left<=right){
            for(i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top+=1;
            for(i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right-=1;
            
            if(top<=bottom){
                for(i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom-=1;
            }
            if(left<=right){
                for(i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left+=1;
            }
        }
        return ans;
        
    }
};