#include<bits/stdc++.h>
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
using namespace std ; 
#define sza(a) sizeof(a)/sizeof(int)
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
 
void moveInterger(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main() {
int n;
int arr[]={1,2,3,-5,-7,-6,6,78,-9};
n=sza(arr);
moveInterger(arr,n);
for(auto v:arr){
    ps(v);

}
return 0 ;
}