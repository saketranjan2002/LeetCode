#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows){
        if(s.length()<=numRows || numRows==1){
            return s;
        }
        else{
            int index=0,length=numRows;
            string ans="";
            while(index<numRows){
                ans.push_back(s[index]);
                int itr=numRows;
                length=numRows;
                while(itr<s.length()){
                    length+=numRows-1;
                    while(itr<length && itr<s.length()){
                        if(itr==length-index-1){
                            ans.push_back(s[itr]);
                        }
                        itr++;
                    }
                    length+=numRows-1;
                    while(itr<length && itr<s.length()){
                        if(itr==length-(numRows-index)){
                            ans.push_back(s[itr]);
                        }
                        itr++;
                    }
                }
                index++;
            }
            return ans;
        }
    }
};