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
TreeNode* solve(vector<int> &in, vector<int>& pre,int &preOrderIndex,int inStartIndex,int inEndIndex,int n, map<int,int>&mp){

    if(preOrderIndex >= n  || inStartIndex > inEndIndex) return NULL;

    int element=pre[preOrderIndex];
    TreeNode* root =new TreeNode(element);
    int position=mp[element];
    preOrderIndex++;
    root->left= solve(in,pre,preOrderIndex,inStartIndex,position-1,n,mp);
    root->right=solve(in,pre,preOrderIndex,position+1,inEndIndex,n,mp);
    return root;
}
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        map<int,int>mp;
        int size=pre.size();
        for(int i=0;i<size;i++){
            mp[in[i]]=i;
        }
        int preOrderIndex=0;

        TreeNode* ans=solve(in,pre,preOrderIndex,0,size-1,size,mp);
        return ans;
    }
};