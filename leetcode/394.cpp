class Solution {
public:
    string decodeString(string s) {
        stack<string>st;

        for(auto ch:s)
        {
            if(ch==']')
            {
                string stringToDecode="";

                while(!st.empty() && st.top()!="[")
                {
                    string top=st.top();
                    stringToDecode+=top;
                    st.pop();


                }
                st.pop();    // for poping '['

                string numeric="";

                while(!st.empty() && isdigit(st.top()[0]))
                {
                    string top=st.top();
                    numeric+=top;
                    st.pop();
                }
                reverse(numeric.begin(),numeric.end());
                int n=stoi(numeric);
                string decodeString="";
                while(n--){
                    decodeString+=stringToDecode;

                }

                st.push(decodeString);
            }

            else
            {
                string temp(1,ch);
                st.push(temp);
            }






        }
        string ans="";

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();

        }

        reverse(ans.begin(),ans.end());
        return ans;


    }
};