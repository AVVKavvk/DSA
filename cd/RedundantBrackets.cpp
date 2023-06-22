#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
//    unordered_map<char,char>mp;
//    mp[')']='(';

   bool flag=true;
   stack<char>st;
   for(int i=0;i<s.size();i++){

       if(s[i]=='(' || s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*'){
           st.push(s[i]);
       }

       else if(!st.empty()&&s[i]==')'){
        flag=false;
        // cout<<"vipin"<<endl;

        if(st.top()=='('){
            break;
        }
        while(st.top()!='('){
            if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                flag=true;
                st.pop();
            }
        }
        st.pop();


       }

   }

   return !flag;

}
