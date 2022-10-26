class Solution {
public:
    int mySqrt(int x) {
        long long int i=0,val=0;
        for(i=0;i<=x;i++){
            double sq=i*i;
            if(sq==x){
                val=i;
                break;
            }
            if(sq>double(x)){
                val=i-1;
                break;
            }
        }
       return val;
    }
};