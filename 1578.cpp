#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0,i=0;
        while(i<colors.length()-1){
            if(colors[i]==colors[i+1]){
                ans+=min(neededTime[i],neededTime[i+1]);
                if(neededTime[i+1]<neededTime[i]){
                    neededTime[i+1]=neededTime[i];
                }
            }    
            i+=1;
        }
        return ans;
        
    }
};