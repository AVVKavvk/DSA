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

Node *insertIntoBST(Node *&root, int data)
{
    if (root == NULL)
    { //* first node or create a node
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        root->left = insertIntoBST(root->left, data);
    }

    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void inOrderTraversal(Node *&root)
{ //?    L N R
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << ' ';
    inOrderTraversal(root->right);
}
void takeInput(Node *&root)
{
    int data;
    cout << "enter data:" << endl;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    takeInput(root);

    inOrderTraversal(root);
    return 0;
}