#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define fli(a,b) for(int i=a;i<b;i++)
#define flj(a,b) for(int j=a;j<b;j++)
#define flk(a,b) for(int k=a;k<b;k++)
#define ma(a,b)      ( (a) > (b) ? (a) : (b)); 
#define mi(a,b)      ( (a) < (b) ? (a) : (b)) ;
#define pb push_back 
#define pob pop_back 
#define sz size() 
#define p2s(a,b) std::cout <<a<<' ' << b << std::endl ;
#define pn(a) std::cout <<a << std::endl ;
#define nl std::cout << std::endl ;
#define p(a) std::cout <<a ;
#define ps(a) std::cout <<a<< ' ' ;
#define cig(arr,n)   cin.getline(arr,n) 
#define sza(a) sizeof(a)/sizeof(int)
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
#define ll long long


 class Trie{
    public:
    char data;
    bool isTerminal;
    Trie *children[26];
    

    Trie(char data){
        this->data=data;
        isTerminal = false;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
    }

 };

 void insert(Trie*root,string word){
    if(word.length()==0){
        root->isTerminal=true;
        return ;
    }

    char ch=word[0];
    int index=ch-'a';
    Trie *child;
    if(root->children[index]==NULL){
        child=new Trie(ch);
        root->children[index]=child;
    }
    else{
      child=root->children[index];
    }
    insert(child,word.substr(1));
 }

  bool search(Trie*root,string word){
    if(word.length()==0){
        return root->isTerminal;
    }
    char ch=word[0];
    int index=ch-'a';
    Trie*child;
    if(root->children[index]!=NULL){
       child=root->children[index];
    }
    else return false;
    return search(child,word.substr(1));
  }
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



return 0 ;
}