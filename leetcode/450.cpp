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

int  findMax(TreeNode*root){
    TreeNode*temp=root;
    if(root==NULL) return -1;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->val;
 
}
    TreeNode* deleteNode(TreeNode* root, int key) {
      if(root==NULL) return root;

      if(root->val==key)  {

          if(root->left==NULL && root->right==NULL)
          return NULL;

        else  if(root->left==NULL && root->right!=NULL){

          TreeNode*child=root->right;
          return child;
          }
        else  if(root->left!=NULL && root->right==NULL){
              TreeNode*child=root->left;
              return child;
          }

          else{
              int predecssor=findMax(root->left);
              root->val=predecssor;
              root->left=deleteNode(root->left,predecssor);
              return root;

          }
        
 


      }

      else if(root->val > key){
          root->left=deleteNode(root->left,key);

      }

      else if(root->val < key)
      root->right=deleteNode(root->right,key);

      return root;
    }
};