#include<bits/stdc++.h>
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
using namespace std ; 
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
 
void wavePrint(v2e v){
    int row=v.sz;
    int col=v[0].sz;

    fli(0,col){
        //* even col
        if((i &1)==0){
            flj(0,row){
                ps(v[j][i]);
            }
        }
        //* odd col
        else{
           for(int j=row-1;j>=0;j--){
            ps(v[j][i]);
           }
        }

       
    }
}
int main() {
v2e v{{1,2,3,4},{5,6,7,8},{9,10,11,12}};

wavePrint(v); 
return 0 ;
}