class Solution {
public:
void solve(TreeNode*root,int target, vector<vector<int>>&ans,int sum,vector<int>&temp){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        if(sum+root->val==target){
            temp.push_back(root->val);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
    }
    temp.push_back(root->val);
    solve(root->left,target,ans,sum+root->val,temp);
    solve(root->right,target,ans,sum+root->val,temp);
    temp.pop_back();

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         vector<vector<int>> ans;
        if(root==NULL) return ans;
        vector<int>temp;
        solve(root,targetSum,ans,0,temp);
        return ans;
    }
};