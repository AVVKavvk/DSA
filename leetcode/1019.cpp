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
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int> LLArr;
        ListNode*temp=head;

        while(temp!=NULL){
            LLArr.push_back(temp->val);
            temp=temp->next;
        }

        vector<int>ans(LLArr.size());
        stack<int>st;
        for(int i=LLArr.size()-1;i>=0;i--){

            int curr=LLArr[i];

            while(!st.empty() && LLArr[i]>=st.top()){
                st.pop();
            }

            if(st.empty()){
                ans[i]=0;
                st.push(curr);
            }

            else {
               ans[i]=st.top();
               st.push(curr);
            }
        }

        return ans;
    }
};