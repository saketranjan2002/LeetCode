#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        long long int i=0, index=0, count_max = 1;
        long long int n = nums.size(), cnt,var;
        while(i < n-1){
            if((nums[i] & nums[i+1]) == 0){
                index=i;
                cout<<nums[i]<<" ";
                cnt=2;
                var=i+2;
                long long int temp=nums[i] | nums[i+1];
                while(var<n && (temp & nums[var]) ==0){
                    cnt+=1;
                    temp=temp | nums[var];
                    var+=1;
                }
                if(cnt>count_max){
                    count_max=cnt;
                }
            }
                i+=1;
        }
        return count_max;
    }
};