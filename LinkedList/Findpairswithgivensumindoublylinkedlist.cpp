//time-O(n)
//space-O(1)
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>> ans;
        Node*fast=head;
        Node*slow=head;
        while(fast->next!=NULL){
            fast=fast->next;
        }
        while(slow->data<fast->data){
            if(slow->data+fast->data==target){
                ans.push_back(make_pair(slow->data,fast->data));
                fast=fast->prev;
                slow=slow->next;
            }
            else if(slow->data+fast->data<target)
            slow=slow->next;
            else if(slow->data+fast->data>target)
            fast=fast->prev;
        }
        return ans;
    }
};