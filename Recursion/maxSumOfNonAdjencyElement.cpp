#include<bits/stdc++.h>
using namespace std ; 
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
#define cig(arr,n)   cin.getline(arr,n) 
#define sza(a) sizeof(a)/sizeof(int)
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
 
void Sum(vector<int>&arr,int i,int sum,int& maxi){

if(i>=arr.size()){
    maxi=max(maxi,sum);
    return;
}
//exclude

Sum(arr,i+1,sum,maxi);

//include

Sum(arr,i+2,sum+arr[i],maxi);



}
int main() {
vector<int>arr={1,2,3 ,1,3,5,8,1,9};
int maxi=INT_MIN;
int sum=0;
int i=0;
Sum(arr,i,sum,maxi);

cout<<maxi<<endl;
return 0 ;
}