#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
       int i=0,start=0,temp;
       string ans;
       string add; 
        while(i<s.length()){
            
            if(s[i]==' ' || i==s.length()-1){
                string str=" ";
                temp=i-start;
                if(i==s.length()-1){
                    temp+=1;
                }
                add=s.substr(start,temp);
                reverse(add.begin(),add.end());
                ans.append(add);
                if(i!=s.length()-1 ){
                    ans.append(str);
                }
                start=i+1;    
            }
            i++;
        }
       return ans; 
    }
};