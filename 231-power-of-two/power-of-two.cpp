class Solution {
public:
    // bool check(int n)[
    //     if(n > 0){
    //         if(n%2==0){
    //             {
    //                 int x = n/2;
    //                 if(x== 1) break;
    //                 check(x);
    //                 break;
    //             }
    //         }
    //     }
    // ]
    bool isPowerOfTwo(int n) {
        if(n > 0){
            if(n == 1) return true;
            if(n%2==0){
                {
                    int x = isPowerOfTwo(n/2);
                    if(x == 1) return true;
                }
            }
        }
        return false;
    }
};