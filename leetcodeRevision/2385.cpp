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

TreeNode* creatingMapping(TreeNode* root, map<TreeNode*,TreeNode*>&nodeToParent,int start){
    TreeNode*res=NULL;
    queue<TreeNode*>q;
    q.push(root);
    nodeToParent[root]=NULL;
    while(!q.empty()){
        TreeNode*front=q.front();
        q.pop();
        if(front->val==start){
            res=front;
        }

        if(front->left){
            nodeToParent[front->left]=front;
            q.push(front->left);
        }

        if(front->right){
            nodeToParent[front->right]=front;
            q.push(front->right);

        }
    }

    return res;
}  
    
    int burnTree(TreeNode*root, map<TreeNode*,TreeNode*>&nodeToParent){
        map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(root);
        visited[root]=1;
        int ans=0;

        while(!q.empty()){
            int size=q.size();

            bool flag=0;

            for(int i=0;i<size;i++){
                TreeNode*front=q.front();
                q.pop();

                if(front->left && !visited[front->left]){
                    flag=1;
                    visited[front->left]=1;
                    q.push(front->left);
                }

                if(front->right && !visited[front->right]){
                    flag=1;
                    visited[front->right]=1;
                    q.push(front->right);

                }

                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    flag=1;
                    visited[nodeToParent[front]]=1;
                    q.push(nodeToParent[front]);
                }

            }
            if(flag==1) ans++;
        }
return ans;
    }
    int amountOfTime(TreeNode* root, int start) {

        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 0;
        map<TreeNode*,TreeNode*>nodeToParent;
        TreeNode*targetNode=creatingMapping(root,nodeToParent,start);
        int ans=burnTree(targetNode,nodeToParent);
        return ans;


        
    }
};