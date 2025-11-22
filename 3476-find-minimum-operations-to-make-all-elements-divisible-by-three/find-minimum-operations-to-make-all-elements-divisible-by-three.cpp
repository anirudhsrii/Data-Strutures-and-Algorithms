class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i : nums){
            if(i % 3 == 1 || i % 3 == 2){
                count = count + 1;
            }
        }
        return count;
    }
};