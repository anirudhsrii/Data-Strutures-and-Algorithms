class Solution {
public:
    bool isvalid(string &s){
        int cnt = 0;
        for(char &ch:s){
            if(ch == '(') cnt++;
            else cnt--;
            if( cnt <0) return false;
        }
        return cnt==0;
    }
    void solve(string &s,int n){
        if(s.size() == 2*n){
            if(isvalid(s)){
                ans.push_back(s);
            }
            return;
        }
        s.push_back('(');
        solve(s,n);
        s.pop_back();
        s.push_back(')');
        solve(s,n);
        s.pop_back();
    }
    vector<string>ans;
    vector<string> generateParenthesis(int n) {
        //base conditoon is the 2 times the length
        string s = "";
        solve(s,n); 
        return ans;
    }
};