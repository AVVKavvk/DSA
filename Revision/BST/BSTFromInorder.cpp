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
        this->data = data;
        left = right = NULL;
    }

 };

 Node*  solve(vector<int> &in,int s,int e){
    if(s>e) return NULL;
    
    int mid=s+(e-s)/2;
    int element=in[mid];
    Node* temp=new Node(element);
    temp->left=solve(in,s,mid-1);
    temp->right=solve(in,mid+1,e);
    return temp;
}

void levelOrderTraversal(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout<<node->data<<" ";
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
    }
}
int main() {

vector<int> in={1,2,3,4,5,6,7,8,9};
int s=0;
int e=8;
Node* root=solve(in,s,e);
levelOrderTraversal(root);

return 0 ;
}