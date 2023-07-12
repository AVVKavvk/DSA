class Solution {
public:
    string removeKdigits(string s, int k) {

        int n=s.size();
        stack<char>st;
        if(k==n) return "0";

        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.top()>s[i] ){
                st.pop();
                k--;
            }
            

            if(!st.empty() || s[i]!='0') st.push(s[i]);
        }

        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";

        // string ans(st.size());

        while(!st.empty()){
            s[n-1]=st.top();
            st.pop();
            n--;
        }
        return s.substr(n);

        
        
    }
};