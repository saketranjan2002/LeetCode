#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int i,sum=0;
        vector<int> ans;
        for(int j=0;j<nums.size();j++){
                if(nums[j]%2==0){
                   sum+=nums[j];
                }
        }
        for(i=0;i<queries.size();i++){
            int odd=0,temp;
            temp=nums[queries[i][1]];
            if(temp%2!=0){
                odd=1;
            }
            nums[queries[i][1]]+=queries[i][0];       
            if(nums[queries[i][1]]%2==0 && odd){
                 sum+=nums[queries[i][1]];
            }
            else if(nums[queries[i][1]]%2==0 && odd==0){
                sum+=(nums[queries[i][1]]-temp);
            }
            else if(nums[queries[i][1]]%2!=0 && odd==0){
                sum-=temp;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};