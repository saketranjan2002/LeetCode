#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ispalindrome(string s,int index,int j){
        int i=index,k=j,l=j-index;
       while(k>=i){
          if(s[i]!=s[k]){
              return 0;
          }
          i+=1;
          k-=1;  
        }
        return 1;
    }
    string longestPalindrome(string s) {
        int j=s.length()-1;
        int index=0,max=0;
        map<int,string> mp;
        while(index<s.length()){
            j=s.length()-1;
            while(j>=index){
                // int temp=ispalindrome(s,index,j);
                if( s[index]==s[j] && ispalindrome(s,index,j)==1 && ((j-index)>max) ){
                    max=j-index;
                    if(j==s.length()-1){
                      return s.substr(index,max+1);  
                    }
                    mp[j-index]=s.substr(index,max+1);
                }
            j--;        
           }
         index++;
        }
        // max=0;
        if(max==0){
          return s.substr(0,1);
        }
        string ans;
        
        auto it=mp.begin();
        while(it!=mp.end()){
            if(it->first==max){
              ans=it->second;
            }
            ++it;
        }  
        return ans;
    }
};