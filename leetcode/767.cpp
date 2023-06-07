class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        

        // count element count
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;

        }

        // find max_freq_char and element

        char max_freq_Char;
        int max_freq=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>max_freq){
                max_freq=hash[i];
                max_freq_Char=i+'a';

            }
        }
      int index=0;
      while(max_freq>0 && index<s.length()){
          s[index]=max_freq_Char;
          max_freq--;
          index+=2;
      }
      if(max_freq!=0){
          return "";
      }
     hash[max_freq_Char -'a']=0;
            
    for(int i=0;i<26;i++){

        while(hash[i]>0){
            index=index>=s.length()?1:index;
            s[index]=i+'a';
            hash[i]--;
            index+=2;
        }
    }


    return s;
  

    }
};