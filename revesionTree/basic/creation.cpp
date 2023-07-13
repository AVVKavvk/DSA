#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define fli(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j < b; j++)
#define flk(a, b) for (int k = a; k < b; k++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define sz size()
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define nl std::cout << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define cig(arr, n) cin.getline(arr, n)
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "enter data: ";
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new Node(data);

    cout << "data for left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "data for right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
void levelOrdreTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *top = q.front();
        q.pop();
        if (top == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << top->data << " ";
            if (top->left)
                q.push(top->left);
            if (top->right)
                q.push(top->right);
        }
    }
}



void buildfromLevelorderTraversal(Node* &root){
    queue<Node*>q;
    cout<<"enter data for root ";
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty()){
        Node*top=q.front();
        q.pop();

        cout<<"enter data for left of "<<top->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            top->left= new Node(leftData);
            q.push(top->left);
        }
        cout<<"enter data for right of "<<top->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            top->right= new Node(rightData);
            q.push(top->right);
        }
    }
}


void inorderTraversal(Node*root){
    if(root==NULL) return ;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);


}
void preorderTraversal(Node*root){
    if(root==NULL) return ;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);


}
void postorderTraversal(Node*root){
    if(root==NULL) return ;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";


}
int main()
{
    Node *root = NULL;
    buildfromLevelorderTraversal(root);
       nl;
    levelOrdreTraversal(root);



    // root = buildTree(root);
    // nl;
    // levelOrdreTraversal(root);
    // nl;
    // cout<<"Inorder Traversal "<<endl;
    // inorderTraversal(root);
    // nl;
    // cout<<"preorder Traversal "<<endl;
    // preorderTraversal(root);
    // nl;
    // cout<<"postOrder Traversal "<<endl;
    // postorderTraversal(root);


    return 0;
}


// 1 2 5 4 -1 -1 -1 6 9 -1 -1 -1 3 7 -1 -1 8 -1 10 -1 -1