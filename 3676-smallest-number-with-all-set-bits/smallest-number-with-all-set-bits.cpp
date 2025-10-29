class Solution {
public:
    // bool isPowerofTwo(int n) {
    //     return ((n & (n + 1)) == 0);
    // }
    int smallestNumber(int n) {
    //     int ans = n;
    //     while(!isPowerofTwo(ans)){
    //         ans++;
    //     }
    //     return ans;
        int ans = 1;
        while(ans<n){
            ans = 2*ans+1;
        }
        return ans;
    }
};