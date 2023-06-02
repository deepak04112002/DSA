//time-O(n)
//space-O(n)
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           int cnt=0;
           Node*temp=head;
           vector<int>v;
           while(temp){
               v.push_back(temp->data);
               cnt++;
               temp=temp->next;
           }
           if(n>cnt)return -1;
           return v[cnt-n];
    }
};
//time-O(n)
//time-O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=new ListNode();
        temp->next=head;
        ListNode*fast=temp;
        ListNode*slow=temp;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;

        return temp->next;
    }
};
