class Solution {
    int reverse(int n){
        int val = 0;
        while(n){
            val =  val * 10 + (n % 10);
            n = n/10;
        }
        return val;
    }
public:
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};