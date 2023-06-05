//time-O(n)
//space-O(1)
Node * removeDuplicates(struct Node *head)
    {
        Node*ans=head;
        Node*curr=head;
        while(curr && curr->next){
            Node*temp=curr->next;
            while(temp && temp->data == curr->data){
                temp=temp->next;
            }
            curr->next=temp;
            if(temp){
                temp->prev=curr;
            }
            curr=curr->next;
        }
        return ans;
    }