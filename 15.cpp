
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i=0;
    vector<vector<int>> ans;
    
    while(i<nums.size()-2){
        if(i==0 || nums[i]!=nums[i-1]){
            int num=(nums[i]);
            int str=i+1,end=nums.size()-1;
            while(str<end){
                int sum=nums[str]+nums[end]+num;
                if(sum==0){
                    ans.push_back({num,nums[str],nums[end]});
                    
                    while(str<end && nums[str]==nums[str+1]) str++;
                    while(str<end && nums[end]==nums[end-1]) end--;
                    
                    str++;
                    end--;
                }
                else if(sum>0){
                    end-=1;
                }
                else{
                    str+=1;
                }
            }        
        }   
        i+=1;
    }
    return ans;
}
};