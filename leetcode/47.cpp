

//*                method   1          

class Solution {

    void permutation(vector<int>& nums, vector<vector<int>> &ans,int i){
     if(i>=nums.size()){
         	if (!(count(ans.begin(), ans.end(), nums))) {
		ans.push_back(nums);
        
	}
    return ;
     }


for(int j=i;j<nums.size();j++){
    swap(nums[i],nums[j]);

    permutation(nums,ans,i+1);
     swap(nums[i],nums[j]);
    }


    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
         permutation(nums,ans,0);

         return ans;
    }
};