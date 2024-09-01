long long fact(int num){
    long long res=1;
    for(int i=2;i<=num;i++){
        res=(res*i) % int(1e9+7);
    }
    return res;
}

class Solution {
public:
    int numPrimeArrangements(int n) {
        int nonprime = 0;
        for(int num = 1; num <= n; num++) {
            bool isPrime = true;
            for(int i = 2; i * i <= num; i++) {
                if(num % i == 0 && num!=i) {
                    isPrime = false; // Mark as non-prime
                    break;
                }
            }
            if (!isPrime) {
                nonprime++;
            }
        }
        return (1LL * fact(n - nonprime -1) * fact(nonprime+1)) % int(1e9 + 7);
    }
};
