class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> primefactors;
        for(int num:nums){
            for(int fact=2;fact<=sqrt(num);fact++){
                if(num%fact==0){
                    primefactors.insert(fact);
                }
                while(num%fact==0){
                    num=num/fact;
                }
            }
            if(num!=1){
                primefactors.insert(num);
            }
        }
        return primefactors.size();
    }
};