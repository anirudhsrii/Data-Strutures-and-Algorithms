class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /*map<int,int> mpp;
        for(int i = 0 ; i< nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(int i = 0 ;i<nums.size();i++){
            for(int j = i+1 ; j< nums.size();j++){
                if(nums[i] == nums[j] && abs(i-j)<=k ) return true;
            }
        }
        return false;*/
        
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++) {
            if (mpp.find(nums[i]) != mpp.end()) {  //check if a specific key already exists in the map
                if(abs(i - mpp[nums[i]]) <= k) {
                    return true;
                }
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};