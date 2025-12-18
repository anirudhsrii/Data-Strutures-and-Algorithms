class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        double window = 0; // going to check the window that is currently in use
        for(int i = 0 ; i<k;i++){
            window += nums[i];
        }
        ans = window / k;  // here we are storing our first answer 
        for(int right = k ; right < nums.size(); right++){
            /*now if we are sliding our window with an increase then we need to subtract the earlier
            one as well na suppose arr=[1,2,3,4,5,6] so at first the window take the arr = [1,2,3,4]
            now then we need this average as stated in the question.
            then in this loop we are going to slide our window towards the right and we subtract the
            element from the left in out window . new window = [2,3,4,5] and we delete the left one element
            that is 1 from the window.
           */
           window += nums[right] - nums[right - k];
           ans = max(ans , window/k);
        }
        return ans;
    }
};