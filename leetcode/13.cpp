class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       
        sort(strs.begin(),strs.end());
        int n=strs.size();
       string startString=strs[0];
        string endstring=strs[n-1];
        string ans="";
for(int i=0;i<startString.size();i++){
    if(startString[i]==endstring[i]){
        ans+=startString[i];
    }
    else{
        break;
    }
}

return ans;
        
    }
};