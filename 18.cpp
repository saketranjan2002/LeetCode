#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int j=0,i;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        if(nums.size()<4){
            return ans;       
        }
       
        while(j<nums.size()-3){
            if(j==0 || nums[j]!=nums[j-1]){
               
                i=j+1;
                while(i<nums.size()-2){
                    if(i==j+1 ||nums[i]!=nums[i-1]){
                        int num=(nums[i]);
                        int str=i+1,end=nums.size()-1;
                        while(str<end){
                            // long long int sum=nums[j]+nums[str]+nums[end]+num;
                            if(nums[j]>0 && nums[j]>=1000000000){
                                break;
                            }
                            else{
                                long long int sum=nums[j]+nums[str]+nums[end]+num;
                                if(sum==target){
                                ans.push_back({nums[j],num,nums[str],nums[end]});
                                while(str<end && nums[str]==nums[str+1]) str++;
                                while(str<end && nums[end]==nums[end-1]) end--;
                                str++;
                                end--;
                                }
                                else if(sum>target){
                                    while(str<end && nums[end]==nums[end-1]) end--;
                                    end-=1;
                                }
                                else{
                                    while(str<end && nums[str]==nums[str+1]) str++;
                                    str+=1;
                                }
                            }        
                        }   
                   }
                i++;    
                }
            j++;
        }
        return ans;
    }
    }
};