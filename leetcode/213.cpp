class Solution {
public:

int solveSO(vector<int>nums,int s,int e){
    int prev2=0;
    int prev1=nums[s];
    for(int i=s+1;i<e;i++){
        int inc=nums[i]+prev2;
        int exc=prev1;
        int ans=max(inc,exc);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        return max(solveSO(nums,0,n-1),solveSO(nums,1,n));
    }
};