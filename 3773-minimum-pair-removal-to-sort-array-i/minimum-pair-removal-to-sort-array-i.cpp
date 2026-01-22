class Solution {
public:
    int minpairsum(vector<int>& nums){
        int minsum = INT_MAX;
        int ind = -1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] + nums[i+1] < minsum){
                minsum = nums[i] + nums[i+1];
                ind = i;
            }
        }
        return ind;
    }
    int minimumPairRemoval(vector<int>& nums) {
        // first check whether the array is sorted or not
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i > i+1) break;
        }
        // now we need the loop of the operations for the unsorted array
        // here we will combine all the approaches under one loop
        int n = nums.size();
        while(!is_sorted(nums.begin(),nums.end())){
            int index = minpairsum(nums);
            nums[index] = nums[index+1] +nums[index];
            nums.erase(begin(nums) + index + 1);
            cnt++;
        }
        return cnt;
    }
};