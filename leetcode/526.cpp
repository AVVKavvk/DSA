class Solution {
public:

void countArrangementHelper(vector<int>&v,int currNum,int &n,int &ans){

if(currNum>=n+1){
    ++ans;
    return ;
}


for(int i=1;i<=n;i++){
    if(v[i]==0 && ( currNum % i == 0   ||   i % currNum == 0 )){
        v[i]=currNum; 
        countArrangementHelper(v,currNum+1,n,ans);
        v[i]=0;
    }
}



}
    int countArrangement(int n) {
        int ans=0;
        vector<int>v(n+1);
        countArrangementHelper(v,1,n,ans);
        return ans;
    }
};