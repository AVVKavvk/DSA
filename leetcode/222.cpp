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

void inorderTraversal(TreeNode*root,int &totalNode){
    if(root==NULL){
        return;
    }
      totalNode++;
    inorderTraversal(root->left,totalNode);
    inorderTraversal(root->right,totalNode);
}
    int countNodes(TreeNode* root) {
        int totalNode=0;
        inorderTraversal(root,totalNode);
        return totalNode;
    }
};