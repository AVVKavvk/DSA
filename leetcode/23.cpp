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

class compare{
   public:
   bool operator()(ListNode*a,ListNode*b){
       return a->val > b->val;
   }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode* ,vector<ListNode*>,compare>minHeap;

       

        int k=lists.size();
        for(int i=0;i<k;i++){
            ListNode* head=lists[i];
            if(head!=NULL)
            minHeap.push(head);
            
        }
         ListNode* head=NULL;
        ListNode*tail=head;

        while(!minHeap.empty()){

            ListNode*temp=minHeap.top();
            minHeap.pop();
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{

                tail->next=temp;
                tail=temp;
            }

            if(temp->next!=NULL){
                minHeap.push(temp->next);
            }



        }

        return head;

    }
};