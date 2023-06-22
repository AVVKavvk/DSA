
//* method 1      

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
    ListNode* mergeNodes(ListNode* head) {
        // ListNode*ans=new ListNode(-1);
        // ListNode*tail=ans;
        // ListNode*temp=head;

        ListNode*slow=head;
        ListNode*fast=head->next;
        ListNode*newLastNode=NULL;
        int sum=0;
        // temp=temp->next; // avoid first zero
        while(fast!=NULL){
            if(fast->val!=0){
                sum+=fast->val;
            }
            else{
                
                // ListNode*newNode=new ListNode(sum);
                // tail->next=newNode;
                // tail=newNode;
                // sum=0;
               slow->val=sum;
               newLastNode=slow;
               slow=slow->next;
               sum=0;


            }

            fast=fast->next;
        }

ListNode*temp=newLastNode->next;
newLastNode->next=NULL;

while(temp!=NULL){
    ListNode*newTemp=temp->next;
    delete temp;
    temp=newTemp;
}

        return head;
    }
};


//*      method   2

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*ans=new ListNode(-1);
        ListNode*tail=ans;
        ListNode*temp=head;
        int sum=0;
        temp=temp->next; // avoid first zero
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                
                ListNode*newNode=new ListNode(sum);
                tail->next=newNode;
                tail=newNode;
                sum=0;

            }

            temp=temp->next;
        }

        return ans->next;
    }
};