class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // int distance = 0;
        // for(int i = 0 ; i < nums1.size();i++){
        //     for(int j = 0 ; j < nums2.size() ; j++){
        //         if( i <= j && nums1[i] <= nums2[j]){
        //             distance = max(distance , j-i);
        //         }
        //     }
        // }
        // return distance;
        int dis = 0;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                dis = max(dis, j-i);
                j++ ;  // for increasing the 2nd array pointer
            }
            else i++; // if not then for increasing the 1st array pointer
        }
        return dis;
    }
};