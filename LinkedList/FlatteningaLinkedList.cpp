//time-O(summation of total no of nodes)
//space-O(1)
Node*mergeList(Node*a,Node*b){
        Node*temp=new Node(0);
        Node*res=temp;
        while(a!=NULL && b!=NULL){
            if(a->data < b->data){
                temp->bottom=a;
                temp=temp->bottom;
                a=a->bottom;
            }
            else{
                temp->bottom=b;
                temp=temp->bottom;
                b=b->bottom;
            }
        }
        if(a)temp->bottom=a;
        else temp->bottom=b;
        
        return res->bottom;
    }
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL) return root;
   
   root->next=flatten(root->next);
   
   root=mergeList(root,root->next);
   
   return root;
}