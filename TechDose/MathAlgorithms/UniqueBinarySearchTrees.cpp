long long combination(int n1,int n2){
    n2=(n1-n2<n2)?n1-n2:n2;
    long long ans=1;
    for(int i=0;i<n2;i++){
       ans*=(n1-i);
       ans/=(i+1);
    }
    return ans;
}
class Solution {
public:
    int numTrees(int n) {
        if(n==1) return 1;
        long num=combination(2*n,n);
        return num/(n+1);
    }
};