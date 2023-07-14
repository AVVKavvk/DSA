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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;

        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
          q.push({root,{0,0}});

        // while(!q.empty()){
        //     pair<TreeNode*,pair<int,int>> front=q.front();
        //     q.pop();
        //     TreeNode*top=front.first;
        //     int HD=front.second.first;
        //     int lvl=front.second.second;
        //     mp[HD][lvl].push_back(top->val);

        //     if(top->left) q.push({top->left,{HD-1,lvl+1}});
        //     if(top->right) q.push({top->right,{HD+1,lvl+1}});
        // }
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> top= q.front();
            q.pop();
            
            TreeNode*node=top.first;
            int HD=top.second.first;
            int lvl=top.second.second;
            mp[HD][lvl].insert(node->val);
            
            if(node->left) {
                q.push({node->left,{HD-1,lvl+1}});
            }
            
            if(node->right){
                q.push({node->right,{HD+1,lvl+1}});
            }
            
        }

        for(auto i:mp){
            vector<int>temp;
            for(auto j:i.second){
                
                for(auto k:j.second){
                    temp.push_back(k);
                }
                
            }
            ans.push_back(temp);
        }

        return ans;
    }
};