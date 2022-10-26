#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i;
        string ans="";
        char temp;
        int index=0;
        
        if(strs.size()==1){
            return strs[0];
        }
        else{
            while(index<strs[0].length()){
                for(i=1;i<strs.size();i++){
                    if(index<strs[0].length()){
                       temp=strs[0][index];    
                    }
                    if(strs[i][index]!=temp){
                        return ans;
                    }
                    if(strs[i][index]==temp && i==strs.size()-1){
                        ans.push_back(temp);
                    }
                }
                index+=1;
            }
        }     
        return ans;
    }
};