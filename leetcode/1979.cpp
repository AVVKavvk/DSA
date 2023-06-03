class Solution {
public:


int gcd(int a,int b){
    if(a==0){
        return 0;
    }

    if(b==0){
        return 0;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }

    return a;
}
    int findGCD(vector<int>& nums) {

        int n=nums.size();

        sort(nums.begin(),nums.end());

        int maxi=nums[n-1];
        int mini=nums[0];
          int ans=gcd(mini,maxi);

return ans;
    }
};