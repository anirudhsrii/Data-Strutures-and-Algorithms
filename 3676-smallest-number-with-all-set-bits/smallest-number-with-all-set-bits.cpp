class Solution {
public:
    bool isPowerofTwo(int n) {
        return ((n & (n + 1)) == 0);
    }
    int smallestNumber(int n) {
        int ans = n;
        while(!isPowerofTwo(ans)){
            ans++;
        }
        return ans;
    }
};