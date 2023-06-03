//time-O(nlogn)
//space-O(n)
void sort(Node **head)
{
       Node *h = *head ;
     vector<int>v ;
     while( h )
     {   
         int val = h->data ;
         v.push_back(val);
         h = h->next ;
     }
     
     sort( v.begin(), v.end() ) ;
     Node*temp = new Node(v[0]) ;
     Node*s = temp ;
     
     for( int i=1; i<v.size(); i++ )
     {
         Node* temp1 = new Node(v[i]) ;
         s->next = temp1 ;
         s = temp1 ;
     }
     
     *head = temp ;
}
//time-O(n)
//O(1)
class Solution {
public:
    ListNode*Mid(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*mergeSortedlist(ListNode*p1,ListNode*p2){
        if(p1==NULL || p2==NULL){
            return (p1==NULL) ? p2:p1;
        }
        ListNode*ans=new ListNode(0);
        ListNode*curr=ans;
        while(p1!=NULL && p2!=NULL){
            if(p1->val<p2->val){
                curr->next=p1;
                p1=p1->next;
            }
            else{
                curr->next=p2;
                p2=p2->next;
            }
            curr=curr->next;
        }
        if(p1!=NULL || p2!=NULL){
            curr->next=(p1!=NULL) ? p1:p2;
        }
        return ans->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode*temp=Mid(head);
        ListNode*newHead=temp->next;
        temp->next=NULL;
        ListNode*leftside=sortList(head);
        ListNode*rightside=sortList(newHead);

        return mergeSortedlist(leftside,rightside);
    }
};