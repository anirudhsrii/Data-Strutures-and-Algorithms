class Solution {
public:
    const int M=1e9+7;
    int findpower(long long a,long long b){
        if(b==0) return 1; // anything to the power of form a^0 = 1
        long long half = findpower(a,b/2);
        long long result = (half*half) % M;
        if(b % 2 == 1) {  // if b is odd then we need to multiply it with the a then modulo of it.
            result = (result * a) % M;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        return (long long)findpower(5,(n+1)/2) * findpower(4,n/2) % M;
    }
};