#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if((i!=j) && (nums[i]+nums[j]==target)){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=1;
                    break;
                }
            }
        if(flag==1){
            break;
        }
        }
        
        
    return ans;
    }
};