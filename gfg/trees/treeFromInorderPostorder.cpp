//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
int findPosition(int in[],int element,int s,int e){
    for(int i=s;i<=e;i++){
        if(element==in[i]) return i;
    }
    return -1;
}
Node* solve(int in[], int post[], int &postOrderIndex,int inStartIndex, int inEndIndex){
    if(postOrderIndex < 0 || inStartIndex > inEndIndex ) return NULL;
    
    int element=post[postOrderIndex];
    Node*root =new Node(element);
    int position= findPosition(in,element,inStartIndex,inEndIndex);
    postOrderIndex--;
    root->right=solve(in,post,postOrderIndex,position+1,inEndIndex);
    root->left=solve(in,post,postOrderIndex,inStartIndex,position-1);
    return root;
}
//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    int postOrderIndex=n-1;
    Node*ans=solve(in,post,postOrderIndex,0,n-1);
}
