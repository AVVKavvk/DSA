class Solution {
public:


bool iPlaindrome(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;
}
    string longestPalindrome(string s) {
        string ans="";
int n=s.length();
     for(int i=0;i<n;i++){
         for(int j=i;j<n;j++){
             if(iPlaindrome(s,i,j)){
                 string t=s.substr(i,j-i+1);
                 ans=t.size()>ans.size()?t:ans;
             }
         }
     }
     return ans;


    }
};