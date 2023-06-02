//time-O(n)
//space-O(1)
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        if(cnt==1)return NULL;
        for(int i=1;i<cnt/2;i++){
            if(temp!=NULL)
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};