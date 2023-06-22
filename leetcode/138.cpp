
//* method   1

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

// Node* helper(Node*head ,unordered_map<Node*,Node*>&mp){
//     if(head==NULL)
//     return head;


//     Node*newNode=new Node(head->val);
//     mp[head]=newNode;
//     newNode->next=helper(head->next,mp);
// if(head->random!=NULL)
//     newNode->random=mp[head->random];
// return newNode;
// }
    Node* copyRandomList(Node* head) {
        // unordered_map<Node*,Node*>mp;
        // return helper(head,mp);
        if(head==NULL){
            return NULL;
        }

        Node*it=head;
        while(it!=NULL){                  //  clone A into A'

            Node*newNode=new Node(it->val);
            newNode->next=it->next;
            it->next=newNode;
            it=it->next->next;

        }
        
        it=head;
        while(it!=NULL){            // random link creating
            Node*clonedNode=it->next;
            clonedNode->random=it->random!=NULL ? it->random->next :NULL;
            it=it->next->next;
        }

        it=head;                // deteching

        Node*clonedNodeHead=it->next;
        while(it!=NULL){

            Node*clonedNode=it->next;
            it->next=it->next->next;
            if(clonedNode->next!=NULL){
                clonedNode->next=clonedNode->next->next;
            }
            it=it->next;
 
             
        }

        return clonedNodeHead;
    }
};




//*    method  2 

/*
Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

Node* helper(Node*head ,unordered_map<Node*,Node*>&mp){
    if(head==NULL)
    return head;


    Node*newNode=new Node(head->val);
    mp[head]=newNode;
    newNode->next=helper(head->next,mp);
if(head->random!=NULL)
    newNode->random=mp[head->random];
return newNode;
}
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        return helper(head,mp);

    }
};













