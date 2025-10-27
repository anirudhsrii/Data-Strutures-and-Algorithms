class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // Anirudh
        int n = bank.size();
        int prevDcnt = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            int currDcnt = 0;
            for(char &ch : bank[i]){
                if(ch == '1') currDcnt++;
            }
            ans += (currDcnt * prevDcnt);
            if(currDcnt != 0){
                prevDcnt = currDcnt;
            }
        }
        return ans;
    }
};