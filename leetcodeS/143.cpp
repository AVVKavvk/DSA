

//*             method 1        

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
    void reorderList(ListNode* head) {
          vector<ListNode*> arr;
          ListNode*temp=head;
        while(temp!=NULL){
            arr.push_back(temp);
            temp=temp->next;
        }
        
		// pointers to start and end of list. Re-order in alternating fashion from both end
        int L = 1, R = size(arr)-1;
        int i=0;
        while(L<=R) {

            if(i & 1)                             // odd iteration:
                head -> next = arr[L++];          //        - pick node from L & update L ptr
            else                                  // even iteration
                head -> next = arr[R--];  
            i++;  
            head = head -> next    ;             //        - pick node from R & update R ptr
        }
        
        head -> next = nullptr;
    }
    
};

//*             method 2         


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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return ;
        int size=0;
        stack<ListNode*>st;

        ListNode*temp=head;
        while(temp!=NULL){
            st.push(temp);
            size++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<size/2;i++){
            ListNode*stackNode=st.top();
            st.pop();
            stackNode->next=temp->next;
            temp->next=stackNode;
            temp=temp->next->next;


        }
        temp->next=NULL;






    }
};



// *                method 3           through    half of linked list

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

    ListNode* getMidNode(ListNode*head,ListNode*&prev){
        if(head==NULL) return NULL;

        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast){
                fast=fast->next;
                prev=slow;
                slow=slow->next;
            }
        }
        return slow;
    }


    void reorderList(ListNode* head) {

        if(head==NULL) return;
        if(head->next==NULL) return;

        ListNode*prev=NULL;
        ListNode*midNode=getMidNode(head,prev);
       
        prev->next=NULL;
     

        stack<ListNode*>st;

        ListNode*temp=midNode;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }


        ListNode*ans=NULL;
        ListNode*tail=ans;

        temp=head;
        while(temp!=NULL&&!st.empty()){
            if(ans==NULL){
                 cout<<temp->val<<" ";
                ans=temp;
                tail=temp;
                  temp=temp->next;
                ListNode*firstStack=st.top();
                tail->next=firstStack;
                tail=firstStack;
               
                st.pop();

               
            }
            else {

            cout<<temp->val<<" ";
            tail->next=temp;
            tail=temp;
             temp=temp->next;
            ListNode*firstStack=st.top();
            tail->next=firstStack;
            tail=firstStack;;
               
             st.pop();
            }

          

        }
        if(!st.empty()){
            tail->next=st.top();
            tail=st.top();
              st.pop();
        }

        tail->next=NULL;
         head=ans;
    }
};