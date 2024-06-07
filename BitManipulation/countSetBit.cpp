#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define ll long long
#define limit(x) (x.begin(),x.end())


 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int t=n;
int cnt=0;

while(n>0){
    if(n&1) cnt++;
    n=n>>1;
}
cout<<cnt<<endl;

cout<<__builtin_popcount(t);


return 0 ;
}