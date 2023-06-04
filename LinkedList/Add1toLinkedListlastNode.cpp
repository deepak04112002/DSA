//time-O(n)
//space-O(1)
Node*reverse(Node*head){
        Node*next=NULL;
        Node*prev=NULL;
        Node*curr=head;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // return head of list after adding one
        head=reverse(head);
        Node*curr=head;
        bool f=true;
        while(curr!=NULL && f==true){
            if(curr->next==NULL && curr->data==9){
                curr->data=1;
                Node*temp=new Node(0);
                temp->next=head;
                head=temp;
                curr=curr->next;
            }
            else if(curr->data==9){
                curr->data=0;
                curr=curr->next;
            }
            else{
                curr->data=curr->data + 1;
                curr=curr->next;
                f=false;
            }
        }
        head=reverse(head);
        return head;
    }