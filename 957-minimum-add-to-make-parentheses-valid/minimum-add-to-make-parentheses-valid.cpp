class Solution {
public:
    int minAddToMakeValid(string s) {
        // without the stack size and space
        int size = 0;
        int open = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(') size++;
            else if(size > 0) size--;
            else open++; 
        }
        return size+open;
    }
};