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
    {
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

void InorderTracersal(Node *root)
{
    if (root == NULL)
        return;

    InorderTracersal(root->left);
    cout << root->data << " ";
    InorderTracersal(root->right);
}
bool InorderSearch(Node *root, int target)
{
    if (root == NULL)
        return false;
    bool a=false, b=false;
    if (root->data == target)
        return true;

    else if (root->data > target)
        a = InorderSearch(root->left, target);
    else
        b = InorderSearch(root->right, target);

    return a || b;
}
void takeInput(Node *&root)
{
    int data;
    cout << " enter data" << endl;
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
    InorderTracersal(root);
    cout << endl;
    cout << "enter target :" << endl;
    int target;
    cin >> target;
    cout << InorderSearch(root, target);

    return 0;
}

//  10 20 5 2 30 40 100 120 110 -1