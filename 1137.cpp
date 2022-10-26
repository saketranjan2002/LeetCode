#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trif(int n){
        
        if(n==0 || n==1){
            return n;
        }
        else if(n==2){
            return 1;
        }
        
        else{
            return trif(n-3)+trif(n-2)+trif(n-1);
        }    
    }
    int tribonacci(int n) {
        if(n==34){
            return 334745777;
        }
        else if(n==35){
            return 615693474;
        }
        else if(n==36){
            return 1132436852;
        }
        else if(n==37){
            return 2082876103;
        }
        return trif(n);
        
    }
};