#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int found(string s,int index,int i){
        int j;
        for( j=index;j<i;j++){
            if(s[j]==s[i]){
                return j+1;
            }
        }
        return 0;
    }
    
    int lengthOfLongestSubstring(string s) {
        vector<int>list;
        int index=0;
        if(s.length()==0 || s.length()==1){
            return s.length();
        }
        
        else{
        for(int i=1;i<s.length();i++){
            int temp=found(s,index,i);
            if(temp){
             list.push_back(i-index);
             index=temp;
             }
            if(i==s.length()-1){
                list.push_back(i-index+1);
             }
        }
        return *max_element(list.begin(), list.end());
        }
     
   }
};