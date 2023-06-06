//time-O(n)
//space-O(1)
ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        int cnt=1;
        ListNode*temp=head;
        while(temp->next && ++cnt){
            temp=temp->next;
        }
        temp->next=head;
        k=k%cnt;
        k=cnt-k;//if(k<=n) then this part not needed
        while(k--) temp=temp->next;
        head=temp->next;
        temp->next=NULL;

        return head;
    }
