/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

int length(ListNode*&head){
    ListNode*temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }

    return len;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA=length(headA);
        int lengthB=length(headB);
  
        int diff=abs(lengthA-lengthB);
 
        if(lengthA>lengthB){
             while(diff--){
                   headA=headA->next;
                           }
             while(headA!=NULL && headB!=NULL){
                 if(headA==headB){
                    return headA;
                }
              
                headA=headA->next;
                headB=headB->next;
             }

        }
         else{
             while(diff--){
                   headB=headB->next;
                           }
             while(headA!=NULL && headB!=NULL){
                 if(headA==headB){
                    return headA;
                }
              
                headA=headA->next;
                headB=headB->next;
             }

        }

        return NULL;

      
        

    }
};