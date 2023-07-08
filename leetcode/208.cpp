
class TrieNode{
    public:
    char data;
    TrieNode*children[26];
    bool isTerminal;

    TrieNode(char d){
        this->data=d;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;

    }
};
class Trie {

    TrieNode*root;

public:
   
    

    Trie() {
       root=new TrieNode('-');
    }

    void insertUtil(TrieNode*&root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return ;
        }

        char ch=word[0];
        int index = ch-'a';
        TrieNode * child;
        // cout<<index<<endl;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            child=new TrieNode(ch);
            root->children[index]=child;
        }
        insertUtil(child,word.substr(1));
    }
    
    void insert(string word) {
       insertUtil(root,word);    
    }

    bool searchUtil(TrieNode*&root,string word){
  if(word.size()==0){
            return root->isTerminal;
        }

        char ch=word[0];
        int index=ch-'a';
        TrieNode *child;

        if(root->children[index]!=NULL){
            child=root->children[index];

        }
        else {
            return false;
        }
        return searchUtil(child,word.substr(1));
    }
    
    bool search(string word) {
        
  return searchUtil(root,word);
      
    }

    bool startsWithUtil(TrieNode*&root,string word){
         if(word.size()==0){
            return true;
        }

        char ch=word[0];
        int index=ch-'a';
        TrieNode*child;
        if(root->children[index]!=NULL) child=root->children[index];
        else return false;
        return startsWithUtil(child,word.substr(1));

    }
    
    bool startsWith(string word) {
      return startsWithUtil(root,word);
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */