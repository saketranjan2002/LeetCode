#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int str=0,end=nums.size()-1,mid,ans;
        mid=(str+end)/2;
        if(nums[end]<target){
            return end+1;
        }
        if(nums[str]>target){
            return 0;
        }
        while(str<=end){
            if(nums[mid]==target || (nums[mid]>target && nums[mid-1]<target)){
                ans=mid;
                break;
            }
            else if(nums[mid]<target){
                str=mid+1;
                mid=(str+end)/2;
            }
            else{
                end=mid-1;
                mid=(str+end)/2;
            }
        }
        return ans;
    }
};