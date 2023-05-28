#include<bits/stdc++.h>
#define pi 3.14
#define fl(a,b) for(int i=a;i<b;i++)
#define ma(a,b)      ( (a) > (b) ? (a) : (b)); 
#define mi(a,b)      ( (a) < (b) ? (a) : (b)) ;
#define pb push_back 
#define p2s(a,b) std::cout <<a<<' ' << b << std::endl ;
#define pn(a) std::cout <<a << std::endl ;
#define p(a) std::cout <<a ;
#define ps(a) std::cout <<a<< ' ' ;
#define vet vector<char> 
using namespace std ; 
#define ve vector<int> 
#define pu(n) push_back( n); 
 
int mini(int arr[],int size){
    int minii=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<minii){
            minii=arr[i];
        }
    }
    return minii;
}
int main() {
int arr[]={1,-87,210,45,750,100,0};
int size=7;
int miniElement=mini(arr,size);
cout<<miniElement<<endl;
return 0 ;
}