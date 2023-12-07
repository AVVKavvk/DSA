class Solution {
public:
    int solveMem(vector<int>& days, vector<int>& costs,vector<int>&dp,int index){
        if(index>=days.size()) return 0;

        if(dp[index]!=-1) return dp[index];

        int option1=costs[0]+solveMem(days,costs,dp,index+1);

        // 7 days;
        int i;
        for( i=index;i<days.size() && days[i]<days[index]+7;i++);
        int option2=costs[1]+solveMem(days,costs,dp,i);

        // 30 days 
        for(i=index;i<days.size() && days[i]<days[index]+30;i++);

        int option3=costs[2]+solveMem(days,costs,dp,i);

        return  dp[index]=min(option1,min(option2,option3));
        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size()+1,-1);
        return solveMem(days,costs,dp,0);
    }
};