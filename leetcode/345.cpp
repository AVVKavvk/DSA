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
 

int main() {
  //*       method   1

  class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();

        int i=0;
        int j=n-1;
        while(i<=j){
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')&&(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')){

            swap(s[i],s[j]);
            i++;j--;
            }
        

        else if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
            i++;
        }
        else if(!(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')){
            j--;
        }
    }
    
    return s;
    }
};


///*            method    2


class Solution {
public:

bool isVowel(char a){
    char ch=tolower(a);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
    string reverseVowels(string s) {
        int n=s.length();

        int i=0;
        int j=n-1;

    

while(i<=j){
    if(isVowel(s[i])&&isVowel(s[j])){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    else if(!isVowel(s[i])){
        i++;

    }

    else if(!isVowel(s[j])){
        j--;
    }
}

    return s;
    }
};


return 0 ;
}