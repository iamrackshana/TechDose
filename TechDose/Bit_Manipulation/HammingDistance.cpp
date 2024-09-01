class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorval=x ^ y,cnt=0;
        while(xorval){
          if(xorval&1){
            cnt++;
          }
          xorval>>=1;
        }
        return cnt;
    }
};