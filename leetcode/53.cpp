class Solution {
public:

int maxSubArrayHelper(vector<int>&v,int start,int end){
    if(start==end){
        return v[start];
    }

    int mid=start+((end-start)>>1);
    int maxLeftBorderSum=INT_MIN;
    int maxRightBorderSum=INT_MIN;
     int leftSum=maxSubArrayHelper(v,start,mid);
     int rightSum=maxSubArrayHelper(v,mid+1,end);


     int leftBorderSum=0;
     int rightBorderSum=0;
  for(int i=mid;i>=start;i--){
      leftBorderSum+=v[i];
     maxLeftBorderSum=max(leftBorderSum,maxLeftBorderSum);
      
  }

   for(int i=mid+1;i<=end;i++){
      rightBorderSum+=v[i];
       maxRightBorderSum=max(rightBorderSum,maxRightBorderSum);
      
  }


  int crossBorderSum=maxRightBorderSum + maxLeftBorderSum;

  return max(leftSum,max(crossBorderSum,rightSum));

}
    int maxSubArray(vector<int>& nums) {
        return maxSubArrayHelper(nums,0,nums.size()-1);
    }
};