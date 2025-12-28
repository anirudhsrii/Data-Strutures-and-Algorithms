class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n > 0){
            if(n == 1) return true;
            if( n % 3 == 0){
                int x = isPowerOfThree(n/3);
                if(x == 1) return true;
            }
        }
        return false;
    }
};