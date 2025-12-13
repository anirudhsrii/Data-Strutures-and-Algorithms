class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // sort(nums.begin(),nums.end());
        // for(int i = 0 ; i<nums.size();i++){
        //     if(nums[i] == val){
        //         nums.pop_back();
        //     }
        // }
        // Alternative, more concise way to combine steps 2 and 3 (C++11/14/17):
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};