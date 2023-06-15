class Solution {
public:

void sloveParenthesis(  vector<string>&ans,int n,int open,int close,string output){
if(open==0 && close==0){
    ans.push_back(output);
    return ;
}

//  include  
if(open>0){
output.push_back('(');
sloveParenthesis(ans,n,open-1,close,output);
output.pop_back();
}

// exclude   

if(close>open){
    output.push_back(')');
    sloveParenthesis(ans,n,open,close-1,output);
    output.pop_back();
}


}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=n;
        int close=n;
        string output="";
        sloveParenthesis(ans,n,open,close,output);

        return ans;
    }
};