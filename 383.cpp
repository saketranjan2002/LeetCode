#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map <char,int>rn;
        map <char,int>mz;

        
        int i;
        
        for(i=0;i<magazine.length();i++){
            mz[magazine[i]]+=1;
        }
         for(i=0;i<ransomNote.length();i++){
            rn[ransomNote[i]]+=1;
        }
        for(i=0;i<ransomNote.length();i++){
           if(rn[ransomNote[i]]>mz[ransomNote[i]]){
               return false;
           }
           
        }
        return true;
        
        
    
}
};    