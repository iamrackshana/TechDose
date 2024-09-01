class Solution {
public:
    int countPrimes(int n) {
        vector<int>prime(n,1);
        int primes=0,i=2;
        while(i*i<=n){
            if(prime[i]==1){
                for(int j=i*i;j<n;j+=i){
                    prime[j]=0;
                }
            }i++;
        }
        for(int ind=2;ind<prime.size();ind++){
            if(prime[ind]==1)
               primes++;
        }
        return primes;
    }
};