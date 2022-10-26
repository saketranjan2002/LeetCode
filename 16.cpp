#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0;
        // vector<vector<int>> ans;
        int ans,min=10000000;

        while(i<nums.size()-2){
            if(i==0 || nums[i]!=nums[i-1]){
                int num=(nums[i]);
                int str=i+1,end=nums.size()-1;
                while(str<end){
                    int sum=nums[str]+nums[end]+num;
                    if(sum==target){
                       ans=sum;
                       return ans; 
                    }
                    else if(sum>target){
                        if(abs(min)>abs(target-sum)){
                            min=abs(target-sum);
                            ans=sum;
                        }
                        // while(str<end && nums[str]==nums[str+1]) str++;
                        while(str<end && nums[end]==nums[end-1]) end--;
                        end-=1;
                    }
                    else{
                        if(abs(min)>abs(target-sum)){
                            min=abs(target-sum);
                            ans=sum;
                        }
                        while(str<end && nums[str]==nums[str+1]) str++;
                        // while(str<end && nums[end]==nums[end-1]) end--;
                        str+=1;
                    }        
                }   
            }
            i+=1;
        }
        return ans;
    }
};