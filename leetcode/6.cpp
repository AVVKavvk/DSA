class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;

        int row=0;
        int i=0;

        bool direction=1; ///top->bottom
        vector<string>ans(numRows);
        while(true){
 if(direction){

     while((row<numRows)&&(i<s.size())){
         ans[row++].push_back(s[i++]);

     }
     row=numRows-2;
 }

 else{


     while((row>=0)&&(i<s.size())){
         ans[row--].push_back(s[i++]);

     }

     row=1;
 }

 if(i>=s.size()){
     break;
 }

 direction=!direction;
        }


string finalString="";

for(auto i:ans){
    finalString+=i;
}
        return finalString;
    }
};