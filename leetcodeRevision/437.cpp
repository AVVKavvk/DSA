class Solution {
public:
    int ans=0;
    void pathSumFromRoot(TreeNode*root,long long sum){
        if(root==NULL) return ;

        if(sum==root->val){
            ans++;
        }

        pathSumFromRoot(root->left,sum-root->val);
        pathSumFromRoot(root->right,sum-root->val);
    }
    int pathSum(TreeNode* root, long long targetSum) {
        if(root){
            pathSumFromRoot(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);

        }

        return ans;
    }
};