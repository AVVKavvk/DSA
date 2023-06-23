class Solution {
public:

void reverseStack(stack<string>&st,string &ans){
   if(st.empty()){
       return ;
   }

   string a=st.top();
   st.pop();
   reverseStack(st,ans);
   ans+=a;

}
    string simplifyPath(string path) {
        stack<string>st;

        int i=0;
        while(i<path.size()){

          int start=i;
          int end=i+1;

          while(end<path.size() && path[end]!='/'){
              end++;
          }

          string subStr=path.substr(start,end-start);
          i=end;
        //   cout<<subStr<<endl;
          if(subStr=="/" || subStr=="/." ){
              continue;
          }

          if(subStr!="/.."){
              st.push(subStr);
          }

          else if(!st.empty()){
                  st.pop();

          }


        }


        string ans=st.empty()?"/":"";

        // while(!st.empty()){
        //     ans+=st.top();
        //     st.pop();
        // }

        // reverse(ans.begin(),ans.end());
  reverseStack(st,ans);
        return ans;
    }
};