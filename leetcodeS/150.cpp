class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans=0;
        stack<int>st;

        if(tokens.size()==1) return stoi(tokens[0]);
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                if(tokens[i]=="+"){
                   
                    int second=st.top();
                    st.pop();
                     int first=st.top();
                    st.pop();
                    ans=first+second;
                    st.push(ans);
                }
                else if(tokens[i]=="-"){
                    
                    int second=st.top();
                    st.pop();
                    int first=st.top();
                    st.pop();
                    ans=first-second;
                    st.push(ans);
                }
                else if(tokens[i]=="*"){
                    
                    int second=st.top();
                    st.pop();
                    int first=st.top();
                    st.pop();
                    ans=first*second;
                    st.push(ans);
                }
               else{
                    int second=st.top();
                    st.pop();
                    int first=st.top();
                    st.pop();
                    ans=first/second;
                    st.push(ans);
                }

            }
            else{
                // cout<<stoi(tokens[i])<<endl;
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};