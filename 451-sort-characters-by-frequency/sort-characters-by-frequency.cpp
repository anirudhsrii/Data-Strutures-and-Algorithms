class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>vec(123);
        for(char ch:s){
            int freq = vec[ch].second;
            vec[ch] = {ch, freq+1};
        }
        // now comparator
        auto cmp = [&] (pair<char,int> &p1 , pair<char,int> &p2){
            return p1.second>p2.second;
        };
        sort(vec.begin() , vec.end() , cmp);
        string result = "";
        for(int i = 0;i<123;i++){
            if(vec[i].second > 0){
                char ch = vec[i].first;
                int freq = vec[i].second;
                string temp = string(freq,ch);
                result += temp;
            }
        }
        return result;
    }
};