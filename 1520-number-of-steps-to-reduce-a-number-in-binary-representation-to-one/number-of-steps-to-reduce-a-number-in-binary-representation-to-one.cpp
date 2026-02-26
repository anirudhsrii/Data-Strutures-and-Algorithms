class Solution {
public:
    int numSteps(string s) {
        // int cnt = 0;
        // for(int i = 0;i<s.size();i++){
        //     cnt = cnt+i;
        // }
        // return cnt;
        int operation = 0;
        int carry = 0;
        
        for(int i = s.size()-1;i>=1;i--){
            if(((s[i] - '0') + carry) % 2 == 1){  //odd
                operation += 2;
                carry = 1;
            }
            else{
                operation += 1;
            }
        }
        return operation + carry;
    }
};