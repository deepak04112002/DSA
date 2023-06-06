//time-O(n)
//space-O(1)
ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        int cnt=0;
        ListNode*prev=dummy,*Next=dummy,*curr=dummy;
        while(curr->next!=NULL){
           curr=curr->next;
           cnt++;
        }
        while(cnt>=k){
            curr=prev->next;
            Next=curr->next;
            for(int i=1;i<k;i++){
                curr->next=Next->next;
                Next->next=prev->next;
                prev->next=Next;
                Next=curr->next;
            }
            cnt-=k;
            prev=curr;
        }
        return dummy->next;
    }