//time-O(n)//n/2 for fast and slow and n/2 for slow and entry
//space-O(1)
ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*entry=head;
        while(fast->next && fast->next->next){
            if(!head)return NULL;
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                while(entry!=slow){
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;
    }