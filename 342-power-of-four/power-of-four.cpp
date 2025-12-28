class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n > 0){
            if(n == 1) return true;
            if(n % 4 == 0){
                int x = isPowerOfFour(n/4);
                if(x == 1) return true;
            }
        }
        return false;
    }
};