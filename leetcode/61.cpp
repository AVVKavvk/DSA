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

    ListNode*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;
}
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL){
            return NULL;
        }

        if(head->next==NULL){
            return head;
        }
        int len=getLength(head);

        int actualK=k%len;
        if(actualK==0) return head;

        int noOfSkipFromHead=len-actualK-1;
      ListNode*temp=head;
        for(int i=0;i<noOfSkipFromHead;i++){
            temp=temp->next;
        }
        ListNode*newHead=temp->next;
        temp->next=NULL;
        ListNode*tailNewHead=newHead;
        while(tailNewHead->next!=NULL){
          tailNewHead=  tailNewHead->next;
        }
        tailNewHead->next=head;
        return newHead;









    }
};