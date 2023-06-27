


//* method   2    o(n^2)    

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

int height(TreeNode*root){
    if(root==NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int differ=abs(leftHeight-rightHeight);
        bool ans1= differ<=1;

        bool leftPart=isBalanced(root->left);
        bool rightPart=isBalanced(root->right);

        if( ans1 && leftPart&& rightPart){
            return true;
        }

        else return false;
    }
};