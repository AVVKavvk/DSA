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
#define vet vector<char> 
using namespace std ; 
#define ve vector<int> 
#define pu(n) push_back( n); 
 
int maxElement(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    fli(0,row){
        flj(0,col){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}
int miniElement(int arr[][4],int row,int col){
    int mini=INT_MAX;
    fli(0,row){
        flj(0,col){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}
int main() {
int arr[3][4]={-1,0,7,3,45,-14,2,74,156,2486,3548,41};
int maxi=maxElement(arr,3,4);
int mini=miniElement(arr,3,4);
p2s(maxi,mini);
return 0 ;
}