class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mpp;
        int result = 0;
        for(int &num : nums){
            mpp[num]++;    // storing the frequency count of each nums[num]
        }
        for(int &num:nums){
            int minnumber = num;
            int maxnumber = num+1;
            if(mpp.find(maxnumber) != mpp.end()){
                result = max(result , mpp[minnumber] + mpp[maxnumber]);
            }
        }
        return result;
    }
};