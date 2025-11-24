class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        for(const auto &it:mpp){
            if(it.second > 1){
                return it.first;
            }
        }
        return {};
    }
};