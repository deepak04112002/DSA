//time-O(n)
//space-O(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*dump=NULL;
        while(head!=NULL){
            ListNode*temp=head->next;
            head->next=dump;
            dump=head;
            head=temp;
        }
        return dump;
    }
};