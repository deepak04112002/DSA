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
//iterative
lass Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode*Prev=NULL;
        ListNode*curr=head;
        ListNode*Next=head->next;
        while(Next){
            curr->next=Prev;
            Prev=curr;
            curr=Next;
            Next=Next->next;
        }
        curr->next=Prev;
        return curr;
    }
};
//recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
        return head;
        auto ans=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return ans;
    }
};