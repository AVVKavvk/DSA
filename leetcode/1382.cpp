/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

void inorder(TreeNode*root,vector<int>&ans){

    if(root==NULL) return ;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}

TreeNode* convertIntoBalanceBST(TreeNode*&root,vector<int>&nums,int s,int e){
    if(s>e) return NULL;
    int mid=(s+e)/2;
    root=new TreeNode(nums[mid]);
    root->left=convertIntoBalanceBST(root->left,nums,s,mid-1);
    root->right=convertIntoBalanceBST(root->right,nums,mid+1,e);
    return root;

}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        root=NULL;
        int start=0;
        int end=ans.size()-1;
        return convertIntoBalanceBST(root,ans,start,end);






    }
};