
//*  method 1       using stack

class Solution {
public:
    bool isValid(string s) {
        if(s[0]!='a') return false;

        stack<char>st;
        for(char ch:s){

             if(ch=='a') st.push(ch);

             else if(ch=='b'){
                 if(!st.empty() && st.top()=='a'){
                     st.push(ch);
                 }

                 else return false;
             }

             else{

                 if(!st.empty() && st.top()=='b'){
                     st.pop();
                     if(!st.empty() && st.top()=='a'){
                         st.pop();
                     }
                 }

                 else {
                     return false;
                 }
             }
 
             

        }

        return st.empty();
    }
};

// *                  method  2   uding erase method  

class Solution {
public:
    bool isValid(string s) {
        int index=s.find("abc");

        while(index!=string::npos){
            s.erase(index,3);
            index=s.find("abc");

        }

        if(s.empty())
        return true;

        else return false;
    }

};