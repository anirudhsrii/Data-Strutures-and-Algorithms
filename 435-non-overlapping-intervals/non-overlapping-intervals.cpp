class Solution {
public:
    static bool cmp(const vector<int> &val1 , const vector<int> &val2){
        return val1[1] < val2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if( n == 0) return 0;
        int sum = 1;
        sort(intervals.begin(),intervals.end(),cmp);
        int lastendtime = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0] >= lastendtime){
                sum = sum+1;
                lastendtime = intervals[i][1];
            }
        }        
        return n-sum;
    }
};