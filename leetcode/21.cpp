


//*   method 1 


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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        if(head1==NULL &&head2==NULL){
            return head1;
        }
        if(head1==NULL && head2!=NULL){
            return head2;
        }
        if(head1!=NULL && head2==NULL){
            return head1;
        }
        ListNode*ans=new ListNode(-1);
        ListNode*tail=ans;
        while(head1!=NULL && head2!=NULL){
            if((head1->val)>(head2->val)){
                  tail->next=head2;
                  tail=tail->next;
                head2=head2->next;
            }
             else{
               tail->next=head1;
                   tail=tail->next;
                head1=head1->next;
            }
        }

        while(head1!=NULL){
             
                tail->next=head1;
                   tail=tail->next;
                head1=head1->next;
            
        }
        while(head2!=NULL){
             
               tail->next=head2;
                   tail=tail->next;
                head2=head2->next;
            
        }

        return ans->next;
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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        if(head1==NULL &&head2==NULL){
            return head1;
        }
        if(head1==NULL && head2!=NULL){
            return head2;
        }
        if(head1!=NULL && head2==NULL){
            return head1;
        }
        ListNode*ans=NULL;
        ListNode*tail=ans;
        while(head1!=NULL && head2!=NULL){
            if((head1->val)>(head2->val)){
                ListNode*newNode=new ListNode(head2->val);
                if(ans==NULL){
                    ans=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                head2=head2->next;
            }
             else{
                ListNode*newNode=new ListNode(head1->val);
                if(ans==NULL){
                    ans=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                head1=head1->next;
            }
        }

        while(head1!=NULL){
             
                ListNode*newNode=new ListNode(head1->val);
                if(ans==NULL){
                    ans=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                head1=head1->next;
            
        }
        while(head2!=NULL){
             
                ListNode*newNode=new ListNode(head2->val);
                if(ans==NULL){
                    ans=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                head2=head2->next;
            
        }

        return ans;
    }
};