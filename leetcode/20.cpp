class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        unordered_map<char,char> mp;
        mp[')']='(';
        mp[']']='[';
        mp['}']='{';
    //    if(')'==s[1]){
    //        cout<<"vipin";
    //    }

        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                  st.push(s[i]);
            }

            else{
                if(!st.empty() && mp[s[i]]==st.top()){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        //  bool is=(st.size()==0)?true:false;

        // cout<<st.top();
        return  st.empty();
    }
};