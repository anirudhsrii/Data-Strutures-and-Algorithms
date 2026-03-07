class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s = s+s;
        // strings s1 and s2 
        // for s1 = "0101010" and for s2 = "101010"
        string s1,s2;
        for(int i = 0 ; i < 2*n ; i++){
            s1 += (i % 2 ? '0' : '1');
            s2 += (i % 2 ? '1' : '0');
        }
        // now we use SW
        int result = INT_MAX;
        int flip1 = 0; // flips for s1
        int flip2 = 0; // flips for s2
        int i = 0, j =0;
        while(j < 2*n){
            if(s[j] != s1[j]){
                flip1++;
            }
            if(s[j] != s2[j]){
                flip2++;
            }

            // if window size runs out so we shrink
            if(j-i+1 > n){
                if(s[i] != s1[i]){
                    flip1--;
                }
                if(s[i] != s2[i]){
                    flip2--;
                }
                i++;
            }
            // when your window size equals to the string size
            if( j-i+1 == n){
                result = min({result,flip1,flip2});
            }
            j++;
        }
    return result;
    }
};