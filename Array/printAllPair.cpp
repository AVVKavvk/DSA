#include<bits/stdc++.h>
#define pi 3.14
#define fli(a,b) for(int i=a;i<b;i++)
#define flj(a,b) for(int j=a;j<b;j++)
#define ma(a,b)      ( (a) > (b) ? (a) : (b)); 
#define mi(a,b)      ( (a) < (b) ? (a) : (b)) ;
#define pb push_back 
#define pob pop_back 
#define sz size() 
#define p2s(a,b) std::cout <<a<<' ' << b << std::endl ;
#define pn(a) std::cout <<a << std::endl ;
#define p(a) std::cout <<a ;
#define ps(a) std::cout <<a<< ' ' ;
#define vet vector<char> 
using namespace std ; 
#define ve vector<int> 
#define pu(n) push_back( n); 
 

int main() {
ve a{10,20,30,40,50};
fli(0,a.sz){
    flj(i+1,a.sz){
        cout<<"(" <<a[i]<<","<<a[j]<<")"<<endl;
    }
}
return 0 ;
}