#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long int ans=0;
        if(num<0){
           return false;
        } 
        while(num!=0){
            ans=(10*ans)+(num%10);
            num/=10;
        }
        return (ans==x);
    }
};