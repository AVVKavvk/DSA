
 //*    method 1

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        // for(int i=0;i<s.length();i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }
        // }
        // return true;

        if(s==t)
        return true;
        else{
            return false;
        }
    }
}; 


 //*         method  2

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
            return false;
        }
    //    vector <int> s1{256,0};
    //    vector <int> t1{256,0};
int s1[256]={0};
int t1[256]={0};
       for(int i=0;i<s.length();i++){
           s1[int(s[i])]++;
          
       }
       for(int i=0;i<s.length();i++){
           t1[int(t[i])]++;
          
       }
      

      for(int i=0;i<256;i++){
          if(s1[i]!=t1[i]){
              return false;
          }
      }
       return true;
    }
};
