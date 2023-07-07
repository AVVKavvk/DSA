//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  
  int countNodes(Node*root){
      if(root==NULL) return 0;
      
      return 1+countNodes(root->left)+countNodes(root->right);
  }
  
  bool isCBT( Node* root,int index,int nodes){
      if(root==NULL)  return true;
      
      if(index>=nodes)
      return false;
      
      return isCBT(root->left,2*index+1,nodes)&& isCBT(root->right,2*index+2,nodes);
  }
  bool check(Node*root){
      if(root==NULL) return true;
      if(root->left==NULL && root->right==NULL) return true;
      if(root->right==NULL && root->left!=NULL ){
          return root->data>=root->left->data;
      }
      
      bool curr=((root->left && root->data >=root->left->data)&&(root->right && root->data >= root->right->data));
      bool left=check(root->left);
      bool right=check(root->right);
      return curr && left&&right;
  }
    bool isHeap(struct Node* root) {
        // code here
        
        int nodes=countNodes(root);
        int index=0;
        
        if(isCBT(root,index,nodes)==false) return false;
        else return check(root);
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends