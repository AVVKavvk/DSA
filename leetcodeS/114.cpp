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
void storePreorder(TreeNode* root,vector<TreeNode*>& preorder){
    if(root==NULL) return ;
    preorder.push_back(root);
    storePreorder(root->left,preorder);
    storePreorder(root->right,preorder);
}
TreeNode* flattenPreorder( vector<TreeNode*> preorder,int i){
    if(i>=preorder.size()){
        return NULL;
    }

    TreeNode* root=preorder[i]; 
    root->left=NULL;
    root->right=flattenPreorder(preorder,i+1);
    return root;
}
    void flatten(TreeNode* root) {
        vector<TreeNode*> preorder;
        if(root==NULL ) return ;
        if(root->left==NULL && root->right==NULL) return ;
        storePreorder(root,preorder);
       int i=0;
       root=flattenPreorder(preorder,i);

    }
};