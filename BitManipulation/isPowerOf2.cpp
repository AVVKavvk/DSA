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

if(n<=0) cout<<false;
if((n & (n-1))==0) cout<<true;
else cout<<false;
return 0 ;
}