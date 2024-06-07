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

int i;
cin>>i;

n=(n^(1<<i));
cout<<n;

// string s="";
// int t=n;
// while(t>0){
//    if(t&1) s+="1";
//    else  s+="0";
//    t=t>>1;
// }
// reverse(s.begin(),s.end());
// cout<<s<<"\n";
// n=(n^(1<<i));
// cout<<n;
// s="";
// t=n;
// while(t>0){
//    if(t&1) s+="1";
//    else  s+="0";
//    t=t>>1;
// }
// reverse(s.begin(),s.end());
// cout<<endl<<s<<endl;

return 0 ;
}