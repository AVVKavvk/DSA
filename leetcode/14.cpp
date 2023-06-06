class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string v="";
        sort(s.begin(),s.end());
        int i=0;
        int n=s[0].length();
string s1=s[0];
    string s2=s[s.size()-1];
        for(int i=0;i<n;i++){
           if(s1[i]==s2[i]){
               v.push_back(s1[i]);
           }

           else{
               break;
           }
        }

        return v;
    }
};