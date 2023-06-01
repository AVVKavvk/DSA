bool isPossibleSol(vector<int> &arr, int n,int k,int mid){
   int lastposition=arr[0];
   int cowCount=1;

    for(int i=0;i<n;i++){
        if(arr[i]-lastposition>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastposition=arr[i];
        }
    }
    return false;
}



int aggressiveCows(vector<int> &arr, int k)
{
   int s=0;
   sort(arr.begin(),arr.end());
   int maxi=-1;
   int n=arr.size();
   int ans=-1;
   for(int i=0;i<n;i++){
       maxi=max(maxi,arr[i]);
   }

   int e=maxi;
   int mid=s+(e-s)/2;


   while(s<=e){
       if(isPossibleSol(arr,n,k,mid)){
           ans=mid;
           s=mid+1;
       }
       else{
           e=mid-1;
       }
       mid=s+(e-s)/2;
   }

   return ans;
}


