class Solution {
public:

 static bool comp(string a,string b){
    string t1=a+b;
    string t2=b+a;

    return t1>t2;
}
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for(auto i:nums ){
            strs.push_back(to_string(i));

        }

        sort(strs.begin(),strs.end(),comp);
        if(strs[0]=="0") return "0";
        string ans="";

        for(int i=0;i<strs.size();i++){
            ans+=strs[i];
        }

        return ans;
    }
};