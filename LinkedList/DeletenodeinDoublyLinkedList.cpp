//time-O(n)
//space-O(1)
class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      if(x==1)return head_ref->next;
      Node*temp=head_ref;
      for(int i=1;i<x-1;i++){
          if(temp!=NULL)
          temp=temp->next;
      }
      temp->next=temp->next->next;
      return head_ref;
    }
};