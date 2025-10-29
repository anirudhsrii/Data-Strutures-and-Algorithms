class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string say = countAndSay(n-1);
        string ans="";
        //Now our processing start from here
        for(int i=0;i<say.size();i++){
            char ch = say[i];
            int cnt = 1;
            while(i<say.size()-1 && say[i] == say[i+1]){ 
                // yahan pr hum check kr rhe hain ki jo say waala array hai usme kitne intergers string form mai repeat kr rhe hain yeh check krne ke baad hum cnt aur index ki value dono increase kr denge
                cnt++;
                i++;
            }
            ans += to_string(cnt) + string(1,ch);
        }
        return ans;
    }
};