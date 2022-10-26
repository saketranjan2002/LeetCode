#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long int val=abs(x);
        long long int ans=0,fact=1;
        while(val>=1){
            if((ans*fact)+(val%10)>pow(2,31)){
                return 0;
            }
            ans=(ans*fact)+(val%10);
            fact=10;
            val/=10;
        }
        if(x<0){
            return -1*ans;
        }
        else{
            return ans;
        }
        
    }
};