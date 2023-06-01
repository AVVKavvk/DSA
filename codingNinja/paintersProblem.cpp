bool isPossibleSol(vector<int> &boards,int n, int k,int mid){
 int    painterCount=1;
 int   boardUnit=0;
    for(int i=0;i<n;i++){
// cout<<boardUnit<<" "<<i<< " "<<painterCount<<endl;
        if((boardUnit + boards[i])<=mid){
           boardUnit+= boards[i] ;
        }
        else{
            painterCount++;
            if(painterCount>k || boards[i]>mid){
                return false;
            }
            boardUnit=0;
             boardUnit+=boards[i];
        } 
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    if(k>n){
        return -1;
    }

    int s=0;
    int e;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){

        if(isPossibleSol(boards,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        // cout<<mid<<ans<<endl;
        mid=s+(e-s)/2;
    }
    return ans;
}