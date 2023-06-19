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

bool isCiccular(ListNode*&head,ListNode*&fastLocation){
    if(head==NULL || head->next==NULL){
        return false;
    }

    ListNode*slow=head;
    ListNode*fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(slow==fast){
            fastLocation=fast;
            return true;
        }
    }

    return false;
}
    ListNode *detectCycle(ListNode *head) {

        ListNode*fastLocation=NULL;
        bool isCicle=isCiccular(head,fastLocation);
       ListNode*slow=head;
        if(isCicle){
while(slow!=fastLocation){
    slow=slow->next;
    fastLocation=fastLocation->next;
}

return slow;
        }
        else return NULL;

    }
};