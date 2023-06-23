
//*     method 1  using stack   

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string ans="";
        int i=0;
        while(i<s.length()){
 if(st.empty()){
     st.push(s[i]);
 }

 else if(st.top()!=s[i]){
     st.push(s[i]);
 }

 else if(st.top()==s[i]){
     st.pop();
 }

i++;




        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
  reverse(ans.begin(),ans.end());
        return ans;
    }
};







//*    method   2
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int i=0;
        while(i<s.length()){

if(ans.length()>0){
    if(ans[ans.length()-1]==s[i]){
        ans.pop_back();
    }

    else{
        ans.push_back(s[i]);
    }
}
else{
    ans.push_back(s[i]);
}
i++;




        }

        return ans;
    }
};