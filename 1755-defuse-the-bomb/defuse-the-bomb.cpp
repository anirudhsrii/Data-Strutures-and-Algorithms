class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        for(int i = 0 ; i < code.size();i++){
            if(k < 0){        // negative ones
                for(int j = i-abs(k) ; j < i ; j++){
                    ans[i] += code[(j+n) % n];
                }
            }
            else if (k > 0){
                for(int j = i+1;j<=i+k;j++){
                    ans[i] += code[j%n];
                }
            }
        }
        return ans;
    }
};