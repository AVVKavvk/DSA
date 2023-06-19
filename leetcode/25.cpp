/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

int getLength(ListNode*&head){
    int len=0;
    ListNode*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;
}

ListNode* reverseKNodes(ListNode*&head,int k){

    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
int len=getLength(head);
    if(k>len){
        return head;
    }

    int count =0;
    ListNode*prev=NULL;
    ListNode*curr=head;
    ListNode*forward=curr->next;
   while(count<k){
       
           
       forward=curr->next;
       
       curr->next=prev;
       prev=curr;
       curr=forward;
       
      
       count++;
   }
   if(forward!=NULL){
       head->next=reverseKNodes(forward,k);
   }
return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseKNodes(head,k);
    }
};