#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0,i=0,cnt=0;
        while(i<nums.size()){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
                cnt++;
            }
            i+=1;
        }
        return cnt;
    }
};