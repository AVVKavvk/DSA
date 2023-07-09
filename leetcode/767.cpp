

//       *           meth0d      1       using   maxHeap



class node{

    public:
    char data;
    int count;

    node(char d,int c){
        data=d;
        count=c;
    }
};

class compare{
    public:
    bool operator()(node a,node b){
        return a.count <b.count;
    }
};

class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        priority_queue<node,vector<node>, compare>maxHeap;

        for(auto i:mp){

            node temp(i.first,i.second);
            maxHeap.push(temp);

        }

        string ans="";

        while(maxHeap.size()>1){
            node first=maxHeap.top();
            maxHeap.pop();
            node second =maxHeap.top();
            maxHeap.pop();
            ans+=first.data;
            ans+=second.data;

            first.count--;
            second.count--;
            if(first.count!=0){
                maxHeap.push(first);
            }
              if(second.count!=0){
                maxHeap.push(second);
            }
        }

        if(maxHeap.size()==1){
            node temp=maxHeap.top();
            maxHeap.pop();
            if(temp.count==1){
                ans+=temp.data;
            }
            else return "";
        }

        return ans;




    }
};










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