

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    
    Node* sortZerosOnesTwos(Node*&head){
        
        if(head==NULL){
            return head;
        }
        
        if(head->next==NULL){
            return head;
        }
        
        
        Node* zeroHead=new Node(-1);
        Node* zeroTail=zeroHead;
        
        Node* oneHead=new Node(-1);
        Node* oneTail=oneHead;
        
        Node* twoHead=new Node(-1);
        Node* twoTail=twoHead;
        
        
        
        
        
        Node*curr=head;
        while(curr!=NULL){
            if(curr->data==0){
                Node*temp=curr;
                curr=curr->next;
                temp->next=NULL;
                zeroTail->next=temp;
                zeroTail=temp;
            }
           else  if(curr->data==1){
                Node*temp=curr;
                curr=curr->next;
                temp->next=NULL;
                oneTail->next=temp;
                oneTail=temp;
            }
             else{
                Node*temp=curr;
                curr=curr->next;
                temp->next=NULL;
                twoTail->next=temp;
                twoTail=temp;
            }
        }
        
        
        Node*temp=oneHead;
        oneHead=oneHead->next;
        temp->next=NULL;
        delete temp;
        temp=twoHead;
        twoHead=twoHead->next;
        temp->next=NULL;
        delete temp;
        
        if(oneHead!=NULL){
            zeroTail->next=oneHead;
            if(twoHead!=NULL){
                oneTail->next=twoHead;
            }
        }
        
        else{
            if(twoHead!=NULL){
                zeroTail->next=twoHead;
            }
        }
        
        temp=zeroHead;
        zeroHead=zeroHead->next;
        temp->next=NULL;
        delete temp;
        
        
        return zeroHead;
        
        
        
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        return sortZerosOnesTwos(head);
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends






   // *          method                2









//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int zeroCount=0;
        int oneCount=0;
        int twoCount=0;
        
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                temp=temp->next;
                zeroCount++;
            }
            
                      else  if(temp->data==1){
                          temp=temp->next;
                oneCount++;
            }
                        else{
                            temp=temp->next;
                twoCount++;
            }


        }
        
        temp=head;
          while(zeroCount--){
              temp->data=0; 
              temp=temp->next;
              
          }
          while(oneCount--){
              temp->data=1;  
              temp=temp->next;
              
          }
                while(twoCount--){
              temp->data=2;   
              
                    temp=temp->next;
                }
              
              return head;
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends