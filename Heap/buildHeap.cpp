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
 

void heapify(int *arr,int n,int i){
    int index=i;
    int left=2*i;
    int right=2*i+1;
    int largest=index;

    if(left<=n && arr[largest]<arr[left]) largest=left;   //*  if n vaild index then <=n else n
    if(right<=n && arr[largest]<arr[right]) largest=right; //*  if n vaild index then <=n else n

    if(largest!=index){
        swap(arr[largest],arr[index]);
        index=largest;
        heapify(arr,n,index);
    }
}

void buildHeap(int *arr,int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
int main() {
int arr[]={-1,52,6,4,8,40,12,56,3,5,85};
int n=10;
buildHeap(arr,n);
for(int i=0;i<=n;i++){
    cout<<arr[i]<<' ';
}
return 0 ;
}