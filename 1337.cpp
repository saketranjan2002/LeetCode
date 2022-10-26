#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>> mat, int k) {
        vector<int> ans;
        vector<int> kwrows;
        int sum,i,j,index;
        int n=mat[0].size();
        int m=mat.size();
        index=0;
        sum=0;
        map<int,int>mp;
        vector<pair<int,int>> v;
        for(i=0;i<m;i++){
            sum=0;
            for(j=0;j<n;j++){
                sum+=mat[i][j];
            }
            mp[index]=sum;
            v.push_back(make_pair(mp[index],index));
            index+=1;
        }
       stable_sort(v.begin(),v.end());
        
        for(auto vt:v){
            ans.push_back(vt.second);    
        } 
        for(i=0;i<k;i++){
            kwrows.push_back(ans[i]);
        }
        
        return kwrows;
    }
};