#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

	class BinaryTreeNode {
		
	public :
		int data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;

		BinaryTreeNode(int data) {
		this -> left = NULL;
		this -> right = NULL;
		this -> data = data;
		}
	};

*************************************************************/
void storeInorder(BinaryTreeNode* root,	vector<int>&inorder){
	if(root==NULL)return;
	storeInorder(root->left,inorder);
	inorder.push_back(root->data);
	storeInorder(root->right,inorder);
}

BinaryTreeNode* convertHeap(BinaryTreeNode* root,	vector<int>&inorder,int &i){
	if(root==NULL) return NULL;
	root->data=inorder[i++];
	root->left=convertHeap(root->left,inorder,i);
	root->right=convertHeap(root->right,inorder,i);
	return root;

}
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int>inorder;
	storeInorder(root,inorder);
	int i=0;
	return convertHeap(root,inorder,i);

}