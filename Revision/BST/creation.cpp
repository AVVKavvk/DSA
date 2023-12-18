#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define fli(a,b) for(int i=a;i<b;i++)
#define flj(a,b) for(int j=a;j<b;j++)
#define flk(a,b) for(int k=a;k<b;k++)
#define ma(a,b)      ( (a) > (b) ? (a) : (b)); 
#define mi(a,b)      ( (a) < (b) ? (a) : (b)) ;
#define pb push_back 
#define pob pop_back 
#define sz size() 
#define p2s(a,b) std::cout <<a<<' ' << b << std::endl ;
#define pn(a) std::cout <<a << std::endl ;
#define nl std::cout << std::endl ;
#define p(a) std::cout <<a ;
#define ps(a) std::cout <<a<< ' ' ;
#define cig(arr,n)   cin.getline(arr,n) 
#define sza(a) sizeof(a)/sizeof(int)
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
 
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data = data ;
        left = right = NULL ;
    }
} ;
void levelOrderTraversal(Node *root)
{

    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << node->data << " ";
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }
}


// Node* buildTree(Node*root){
//     int data;
//     cin>>data;
//     if(data==-1){return NULL;}
//     Node* root=new Node(data);
    
//     int 
// }

// Node* buildTree(Node*root){
//     int data;
//     cout<<"enter root ";
//     cin>>data;
//     Node*root=new Node(data);

//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){

//         Node*root=q.front();
//         q.pop();
        
//     }

// }
Node* buildTree(Node*&root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    else {
        if(root->data>data){
            root->left=buildTree(root->left,data);
        }
        else root->right=buildTree(root->right,data);
    }
    return root;
}
void takeInput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=buildTree(root,data);
        cin>>data;
    }
}
int main() {
  Node*root=NULL;

  takeInput(root);
  levelOrderTraversal(root);

return 0 ;
}