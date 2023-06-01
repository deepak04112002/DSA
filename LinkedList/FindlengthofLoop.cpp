//time-O(n)
//space-O(1)
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node*slow=head;
    Node*fast=head;
    int cnt=1;
    if(head==NULL)return 0;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            Node*temp=slow->next;
            while(temp!=fast){
                temp=temp->next;
                cnt++;
            }
            return cnt;
        }
    }
    return 0;
}