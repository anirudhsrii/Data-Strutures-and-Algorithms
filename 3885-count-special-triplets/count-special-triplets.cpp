class Solution {
public:
    int M = 1e9+7;
    int specialTriplets(vector<int>& nums) {
        map<int,int>mppleft;
        map<int,int>mppright;
        int ans = 0;
        for(int &num:nums){
            mppright[num]++;
        }
        for(int &num:nums){
            mppright[num]--;
            int left = mppleft[num * 2];
            int right = mppright[num * 2];
            ans = (ans + (1LL *left*right)) % M;
            mppleft[num]++;
        }
        return ans;
    }
};