//time-O(n)
//space-O(1)
Node* copyRandomList(Node* head) {
        Node*itr=head;
        Node*front=head;
        while(itr!=NULL){
            front=itr->next;
            Node*copy=new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        itr=head;
        while(itr!=NULL){
            if(itr->random!=NULL)
            itr->next->random=itr->random->next;
            itr=itr->next->next;
        }
        itr=head;
        Node*pseudoHead=new Node(0);
        Node*copy=pseudoHead;
        while(itr!=NULL){
            front=itr->next->next;
            copy->next=itr->next;
            itr->next=front;
            copy=copy->next;
            itr=itr->next;
        }
        return pseudoHead->next;
    }