class Solution {
public:
    double myPow(double x, int n) {
        int pow=n>0?n:abs(n);
        double res=1;
        while(pow>0){
            if(pow&1){
                res*=x;
            }
            x*=x;
            pow/=2;
        }
        res=n>0?res:(1/res);
        return res;
    }
};