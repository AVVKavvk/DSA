class Solution {
public:

int Rob(vector<int>& nums,int i,vector<int>&dp){
    if(i>=nums.size()){

        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int inc= nums[i]+Rob(nums,i+2,dp);

    int exc=0+Rob(nums,i+1,dp);
    return dp[i]=max(inc,exc);


}
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>dp(nums.size()+2,-1);
        return Rob(nums,i,dp);
   
    }
};