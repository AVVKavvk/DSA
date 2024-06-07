// #include<bits/stdc++.h>
// using namespace std ; 
// #define pi 3.14
// #define ll long long
// #define limit(x) (x.begin(),x.end())

// ll NcR(int n,int r){
//     ll ans=1;
//     for(int i=0;i<r;i++){
//        ans=ans*(n-i);
//        ans=ans/(i+1);
//     }
//     return ans;
// }
 

// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int n,r;
// cin>>n>>r;
// n--;
// r--;
// cout<<NcR(n,r);

// return 0 ;
// }



#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define ll long long
#define limit(x) (x.begin(),x.end())


 int nCr(int n,int r){
    int temp=1;
    for(int i=0;i<r;i++){
        temp=temp*n;
        n--;
        temp=temp/(i+1);
    }
    return temp;
 }

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int n,r;
cin>>n>>r;
n--;
r--;


cout<<nCr(n,r);
return 0 ;
}