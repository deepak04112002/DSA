//time-O(n)
//space-O(n)
Node* constructDLL(vector<int>& arr) {
        Node*head=new Node(arr[0]);
        Node*temp=head;
        for(int i=1;i<arr.size();i++){
            Node*curr=new Node(arr[i]);
            temp->next=curr;
            curr->prev=temp;
            temp=curr;
        }
        return head;
    }
