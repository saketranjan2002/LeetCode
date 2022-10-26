#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i;
        vector<string> fb(n);
        for(i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0){
                fb[i]="FizzBuzz";
            }
            else if((i+1)%3==0 && (i+1)%5!=0){
                fb[i]="Fizz";
            }
            else if((i+1)%3!=0 && (i+1)%5==0){
                fb[i]="Buzz";
            }
            else{
                fb[i]=to_string(i+1);
            }
            
        }
        return fb;
    }
};