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

ListNode* merge(ListNode*left,ListNode*right){
 if(left==NULL && right==NULL){
      return  NULL;
  }
  if(left==NULL && right!=NULL){
      return right;
  }

  if(right==NULL && left!=NULL){
      return left;
  }

ListNode*ans=new ListNode(-1);
ListNode*tail=ans;

while(left!=NULL && right!=NULL){
    if(left->val > right->val){
        tail->next=right;
        tail=tail->next;
        right=right->next;
    }

    else{
        tail->next=left;
        tail=tail->next;
        left=left->next;
    }
}

while(left!=NULL){
    tail->next=left;
        tail=tail->next;
        left=left->next;
}
while(right!=NULL){
    tail->next=right;
        tail=tail->next;
        right=right->next;
}
return ans->next;
}
   ListNode* findMid(ListNode*&head){
       ListNode*slow=head;
       ListNode*fast=head->next;
       while(fast!=NULL){
           fast=fast->next;
           if(fast!=NULL){
               fast=fast->next;
               slow=slow->next;
           }
       }

       return slow;
   }
    ListNode* sortList(ListNode* head) {
        if(head==NULL ){
            return head;
        }
        if(head->next==NULL){
            return head;
        }


        ListNode*mid=findMid(head);

        // cout<<mid->val<<endl;
        ListNode*leftLL=head;
        ListNode*rightLL=mid->next;
        mid->next=NULL;

        ListNode*left=sortList(leftLL);
        ListNode*right=sortList(rightLL);
         ListNode*mergedLL=merge(left,right);
         return mergedLL;

        // return NULL;
    }
};