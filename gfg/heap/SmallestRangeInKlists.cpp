//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range

class node{
    public:
    int data;
    int row;
    int col;
    
    node(int val,int r,int c){
        data=val;
        row=r;
        col=c;
    }
};

class compare{
  public:
  
  bool operator()(node*a,node*b){
      return a->data > b->data;
  }
};


class Solution{
    public:
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
          priority_queue<node*,vector<node*>,compare> minHeap;
          int mini=INT_MAX;
          int maxi=INT_MIN;
          
          for(int i=0;i<k;i++){
              int element=arr[i][0];
              mini=min(mini,element);
              maxi=max(maxi,element);
              node *temp=new node(element,i,0);
              minHeap.push(temp);
              
              
          }
          
          
          
          int startAns=mini;
          int endAns=maxi;
          
          
          while(!minHeap.empty()){
              
              node *top=minHeap.top();
              int topElement=top->data;
              int topRow=top->row;
              int topCol=top->col;
              
              minHeap.pop();
              mini=topElement;
              
              int currRange=maxi-mini;
              int ansRange=endAns-startAns;
              
              if(currRange<ansRange){
                  startAns=mini;
                  endAns=maxi;
                  
              }
              
              if(topCol+1 < n ){
                  maxi=max(maxi,arr[topRow][topCol+1]);
                  node * newNode=new node(arr[topRow][topCol+1],topRow,topCol+1);
                  minHeap.push(newNode);
              }
              else break;
          }
          
          return {startAns,endAns};
    }
};












//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends