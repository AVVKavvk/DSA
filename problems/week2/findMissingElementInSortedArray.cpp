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
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
 
int findMisisngElement(int arr[],int size){
    int s=0;
    int end=size-1;
    int mid=s+(end-s)/2;
    while(s<=end){
        if(arr[mid+1]-arr[mid]!=1&&arr[mid]-arr[mid-1]!=1 && arr[mid]>0){
            return arr[mid]+1;
        }
        else if(arr[mid+1]-arr[mid]==0){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=s+(end-s)/2;
    }

}
int main() {
 int arr[] = {1, 2,3,4,6,7,8,9,10,11};
    // vei v{1, 4, 5, 7, 9, 45, 86, 102, 145, 560};
    int size = 10;
   
    int index = findMisisngElement(arr, size);
    p(index);
return 0 ;
}