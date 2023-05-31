//time-O(n)
//space-O(1)
Node* reverseDLL(Node * head)
{
    Node*temp;
    while(head){
        temp=head;
        head=head->next;
        temp->next=temp->prev;
        temp->prev=head;
    }
    return temp;
}