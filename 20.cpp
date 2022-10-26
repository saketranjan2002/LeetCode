#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isValid(string s){
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(stk.empty() && (s[i]==']' || s[i]=='}' || s[i]==')')){
                return false;
            }
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stk.push(s[i]);
            }
            else if(s[i]==']' && stk.top()=='['){
                stk.pop();
            }
            else if(s[i]=='}' && stk.top()=='{'){
                stk.pop();
            }
            else if(s[i]==')' && stk.top()=='('){
                stk.pop();
            }
            else{
                return false;
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};