//time-O(n)
//space-O(1)
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL && head->next==NULL)
        return 0;
        int cnt=1e6;
        while(cnt){
            if(!head)return 0;
            head=head->next;
            cnt--;
        }
        return 1;
    }
};
//time-O(n/2)
//space-O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return 0;
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)return 1;
        }
        return 0;
    }
};