#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // vector<string> ans;
        vector<string> vt;
        int size=0,index;

        if(digits.length()==0){
            return vt;
        }
        vector<string> keypad={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
    
    
    for(int i=0;i<digits.length();i++){
        if(i==0){
           int len=keypad[int(digits[i])-2].length();
           for(int j=0;j<len;j++){
                string st="";
                st.push_back(keypad[int(digits[i])-2][j]);
                vt.push_back(st);
                
            }
            index=0;
        }
        
        else{
            int len=keypad[int(digits[i])-2].length();
            
            for(int i=index;i<vt.size();i++){
                for(int j=0;j<len;j++){
                    string str=vt[i];
                    str.push_back(keypad[int(digits[i])-2][j]);
                    vt.push_back(str);
                }
            }
            index=len; 
            
        }
    }
    return vt;    
    }  
};