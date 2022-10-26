#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int ans=0;
        int i=0,j=height.size()-1;
        while(i<j){
            long long int temp=min(height[i],height[j])*abs(j-i);
            if(temp>ans){
                ans=temp;
            }
            if(height[i]<=height[j]){
                i+=1;
            }
            else{
                j-=1;
            }
        }
        
    return (int)ans;    
    }
};