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
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];

int ans=0;

for(int i=0;i<n;i++) ans=ans^arr[i];
cout<< ans;
return 0 ;
}