//time-O(n)
//space-O(1)
void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node *temp=*head_ref;
        while(temp){
            if(temp->data==x){
                if(temp->prev==NULL){
                    *head_ref=temp->next;
                    temp->prev=NULL;
                }
                else if(temp->next==NULL){
                    temp->prev->next=NULL;
                }
                else{
                    temp->prev->next=temp->next;
                    temp->next->prev=temp->prev;
                }
            }
            temp=temp->next;
        }
        
    }