//time-O(n)
//space-O(1)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<ListNode*>v;
        ListNode*temp=head;
        while(temp){
            v.push_back(temp);
            temp=temp->next;
        }
        int left=0;
        int right=v.size()-1;
        while(left<=right){
            if(v[left]->val != v[right]->val)
            return 0;
            left++;
            right--;
        }
        return 1;
    }
};