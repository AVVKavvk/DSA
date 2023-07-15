

//*   method 1  do      without using stack      gfg



//*   method   2

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        

        
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        stack<vector<int>>st;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                temp.push_back(front->val);
                // cout<<front->val;
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            st.push(temp);
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;

    }
};