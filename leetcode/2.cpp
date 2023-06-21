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

ListNode* reverse(ListNode*&head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    ListNode*prev=NULL;
ListNode*curr=head;
while(curr!=NULL){
    ListNode*next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}

return prev;
}

ListNode * addTwoNumbersSlove(ListNode* &head1, ListNode* &head2){

// head1=reverse(head1);
// head2=reverse(head2);


ListNode*ans=NULL;
ListNode*tail=ans;

int carry=0;

while(head1!=NULL && head2!=NULL){
    int sum=carry+head1->val+head2->val;
    int digit=sum%10;
    carry=sum/10;
    ListNode*newNode=new ListNode(digit);
    if(ans==NULL){
        ans=newNode;
        tail=newNode;
    }

    else{
        tail->next=newNode;
        tail=newNode;
    }

    head1=head1->next;
     head2=head2->next;
}

while(head1!=NULL){
    int sum=carry+head1->val;
    int digit=sum%10;
    carry=sum/10;
    ListNode* newNode=new ListNode(digit);
    tail->next=newNode;
    tail=newNode;

    head1=head1->next;
}
while(head2!=NULL){
    int sum=carry+head2->val;
    int digit=sum%10;
    carry=sum/10;
    ListNode* newNode=new ListNode(digit);
    tail->next=newNode;
    tail=newNode;

    head2=head2->next;
}

while(carry){
    int sum=carry;
    int digit=sum%10;
    carry=sum/10;
    ListNode* newNode=new ListNode(digit);
    tail->next=newNode;
    tail=newNode;
}


return ans;
    
}


    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
//         head1=reverse(head1);
// head2=reverse(head2);
     return addTwoNumbersSlove(head1,head2);
        
        
    }
};