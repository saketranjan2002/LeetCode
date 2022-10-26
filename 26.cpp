#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1,i=1,index=1;
        for(i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[index]=nums[i];
                index+=1;
                cnt+=1;
            }
        }
        return cnt;
    }
};