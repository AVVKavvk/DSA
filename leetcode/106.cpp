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

TreeNode* solve(vector<int>& in, vector<int>& post,int & postOrderIndex,int inStartIndex,int inEndIndex ,map<int,int>&mp ){

    if(postOrderIndex < 0 || inStartIndex > inEndIndex) return NULL;

    int element=post[postOrderIndex];
    TreeNode* root =new TreeNode(element);
    int position= mp[element];

    postOrderIndex--;
    root->right=solve(in,post,postOrderIndex,position+1,inEndIndex,mp);
    root->left=solve(in,post,postOrderIndex,inStartIndex,position-1,mp);
    return root;
    





}
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        map<int,int>mp;
        int size=in.size();
        for(int i=0;i<size;i++){
            mp[in[i]]=i;
        }
        int postOrderIndex=size-1;
        TreeNode* ans=solve(in,post,postOrderIndex,0,size-1,mp);
        return ans;

    }
};