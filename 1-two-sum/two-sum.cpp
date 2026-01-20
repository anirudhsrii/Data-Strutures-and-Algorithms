class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int value = nums[i];
            int req = target - value;
            if(mpp.find(req) != mpp.end()){
                return {mpp[req] , i};
            }
            mpp[value] = i;
        }
        return {-1,-1};    
    }
};