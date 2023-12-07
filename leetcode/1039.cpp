class Solution {
public:
int solveMem(vector<int>&v,int i,int j,vector<vector<int>>&dp){
    if(i+1==j){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=INT_MAX;

    for(int k=i+1;k<j;k++){
        int temp=v[i]*v[j]*v[k]+solveMem(v,i,k,dp)+solveMem(v,k,j,dp);
        ans=min(ans,temp);
    }
    return dp[i][j]= ans;
}
    int minScoreTriangulation(vector<int>& values) {
        vector<vector<int>>dp(values.size()+1,vector<int>(values.size()+1,-1));

        return solveMem(values,0,values.size()-1,dp);
    }
};