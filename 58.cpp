#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string str="";
        int index=s.length()-1;
        while(s[index]==' '){
            index-=1;
        }
        
        while(index>=0){
            if(s[index]==' '){
                break;
            }
            str.push_back(s[index]);
            index-=1;
        }
        return str.length();
    }
};