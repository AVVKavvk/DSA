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
 
int nearSortedArray(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if((mid-1>=0) && arr[mid-1]==key){
            return mid-1;
        }
        if((mid+1<=e) && arr[mid+1]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main() {
  int arr[]={ 10,3,40,20,50,70,80};
  int n=sza(arr);
  int key;
  p("enter key: ");
  cin>>key;
  cout<<nearSortedArray(arr,n,key);
return 0 ;
}