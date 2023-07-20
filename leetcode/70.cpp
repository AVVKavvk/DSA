class Solution {
public:
int solve(int n,int i,vector<int>&dp){
    if(i==n) return 1;
    if(i>n) return 0;
    if(dp[i]!=-1) return dp[i];
    dp[i]= solve(n,i+1,dp)+solve(n,i+2,dp);
    return dp[i];
}

int solveTb(int n){
    vector<int>dp(n+2,0);
    dp[n]=1;

    for(int i=n-1;i>=0;i--){
         dp[i]= dp[i+1]+dp[i+2];
    }

    return dp[0];
}

int solveSo(int n){
    int next1=1;
    int next2=0;
    for(int i=n-1;i>=0;i--){
        int curr=next1+next2;
        next2=next1;
        next1=curr;
    }

    return next1;
}
    int climbStairs(int n) {

        vector<int>dp(n+1,-1);
        // return solve(n,0,dp);
        // return solveTb(n);
        return solveSo(n);
    }
};