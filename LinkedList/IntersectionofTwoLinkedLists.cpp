//in this we are finding intersection of 2 linked list
//time-O(n+m)
//space-O(n)
Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_set<int>st;
        Node*start=new Node(0);
        Node*newHead=start;
        Node*cur=head2;
        while(cur){
            st.insert(cur->data);
            cur=cur->next;
        }
        cur=head1;
        while(cur){
            if(st.find(cur->data)!=st.end()){
                start->next=cur;
                start=start->next;
            }
            cur=cur->next;
        }
        start->next=NULL;
        return newHead->next;
    }
//in this 2 linked list are instersected at a node
//time-O(2m)
//space-O(1)

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode*a=headA;
        ListNode*b=headB;
        while(a!=b){
            a=a==NULL ? headB:a->next;
            b=b==NULL ? headA:b->next;
        }
        return a;
    }
