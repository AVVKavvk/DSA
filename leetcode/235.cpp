/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL )
        return NULL;

        TreeNode*left=NULL;
        TreeNode*right=NULL;

        if(root->val > p->val  && root->val > q->val){
            left=lowestCommonAncestor(root->left,p,q);
            return left;
           

        }

        else if(root->val < p->val && root->val < q->val ){
            right=lowestCommonAncestor(root->right,p,q);
            return right;
        }

        else {
            return root;
        }


    }
};