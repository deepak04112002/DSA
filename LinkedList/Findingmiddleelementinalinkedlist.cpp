//time-O(n)+O(n/2)
//space-O(1)
//brute sol
class Solution{
    public:
    int getMiddle(Node *head)
    {
        Node*temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<cnt/2;i++){
            temp=temp->next;
        }
        int x=temp->data;
        return x;
    }
};
//time-O(n/2)
//space-O(1)
//optimized-Tortoise-Hare-Approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};