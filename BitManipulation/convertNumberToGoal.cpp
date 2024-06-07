#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define ll long long
#define limit(x) (x.begin(),x.end())


 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int start;
cin>>start;
int goal;
cin>>goal;

int tmp= start^goal;

cout<<__builtin_popcount(tmp);
return 0 ;
}