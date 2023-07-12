class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1 && isalpha(s[0])) return 1;
        int i=s.size()-1;
        while(i>=0 && !isalpha(s[i])  ){
            s.pop_back();
            i--;
        }
        i=s.size()-1;
        int len=0;
       while(i>=0 &&!iswspace(s[i])  ){
           len++;
           i--;
       }
        return len;
    }
};