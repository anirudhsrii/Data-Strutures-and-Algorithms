class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size()-1;
        // int sum = 0;
        // while(left < right){
            
        // }
        int minsum = nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k =j+1;k<nums.size();k++){
                    int currentsum = nums[i]+nums[j]+nums[k];
                    if(abs(currentsum-target) < abs(minsum - target)) minsum = currentsum;
                }
            }
        }
        return minsum;
    }
};