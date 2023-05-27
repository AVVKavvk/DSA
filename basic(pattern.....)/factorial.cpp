#include<bits/stdc++.h>
#define pi 3.14
#define fl(a,b) for(int i=a;i<b;i++)
#define ma(a,b)      ( (a) > (b) ? (a) : (b)); 
#define mi(a,b)      ( (a) < (b) ? (a) : (b)) ;
#define pb push_back 
#define ps(a,b) std::cout <<a<<' ' << b << std::endl ;
#define pn(a) std::cout <<a << std::endl ;
#define p(a) std::cout <<a ;
#define vet vector<char> 
using namespace std ; 
#define ve vector<int> 
#define pu(n) push_back( n); 
 
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main() {
int n;
cin>>n;
cout<<fact(n)<<endl;
return 0 ;
}