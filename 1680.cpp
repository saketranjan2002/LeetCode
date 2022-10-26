#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int concatenatedBinary(int n){
        long long int ans=0,l=0;
        int mod=(1000000000+7);
        for(int i=1;i<=n;i++){
        if((i & (i-1))==0){
            l+=1;
        }    
        ans=((ans<<l)|i)%(mod) ;
        }   
    return (int)ans;
    }   
};   