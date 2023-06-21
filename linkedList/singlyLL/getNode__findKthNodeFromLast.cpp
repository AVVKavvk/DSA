

//*              hacker rank             ->      get node


//*        method 1


void solve(SinglyLinkedListNode* head, int &k,int &ans){
    
    if(head==NULL){
        return ;
    }
    
    solve(head->next,k,ans);
    if(k==0){
        ans=head->data;
    }
    
    k--;
}
int getNode(SinglyLinkedListNode* head, int k){
    int ans=-1;
    solve(head,k,ans);
    
    return ans;
}


//*        method 2


int lengthLL(SinglyLinkedListNode* head){
       int len=0;
    SinglyLinkedListNode* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    
    return len;
}
int getNode(SinglyLinkedListNode* head, int k) {
    
    int count=0;
    int len=lengthLL(head);
    count=len-k-1;
    while(count--){
        head=head->next;
    }
      return head->data;

}
