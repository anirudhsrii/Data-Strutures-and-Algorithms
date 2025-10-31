class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>m;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<int>ans;
        for(auto x:m){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};