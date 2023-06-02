//time-O(n)//odd-even indicies are arranged
//odd-O(1)
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode*even=NULL;
        ListNode*odd=NULL;
        ListNode*e=NULL;
        ListNode*o=NULL;
        int cnt=1;
        while(head!=NULL){
            if(cnt%2==0){
                if(even==NULL){
                    even=head;
                    e=head;
                    head=head->next;
                }
                else{
                    e->next=head;
                    e=e->next;
                    head=head->next;
                }
            }
            else{
                if(odd==NULL){
                    odd=head;
                    o=head;
                    head=head->next;
                }
                else{
                    o->next=head;
                    o=o->next;
                    head=head->next;
                }
            }
            cnt++;
        }
        
        if(o) o->next=even;
        if(e) e->next=NULL;
        if(odd) return odd;
        return even;
    }
};
//time-O(n)//even-odd values are arranged
//space-O(1)
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node*even=NULL;
        Node*odd=NULL;
        Node*e=NULL;
        Node*o=NULL;
        while(head){
            if(head->data%2==0){
                if(even==NULL){
                    even=head;
                    e=head;
                }
                else{
                    e->next=head;
                    e=e->next;
                }
            }
            else{
                if(odd==NULL){
                    odd=head;
                    o=head;
                }
                else{
                    o->next=head;
                    o=o->next;
                }
            }
            head=head->next;
        }
        if(e) e->next=odd;
        if(o) o->next=NULL;
        if(even) return even;
        return odd;
    }
};