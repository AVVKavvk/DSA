#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define ll long long
#define limit(x) (x.begin(),x.end())


 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b;
cout<<"enter two integers \n";
cin>>a>>b;
cout<<"a : "<<a<<"  b : "<<b<<endl;

a = a^b;
b=b^a;
a=a^b;
cout<<"a : "<<a<<"  b : "<<b<<endl;
return 0 ;
}