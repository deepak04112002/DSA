//time-O(n)
//space-O(1)
class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int cnt=0;
        for(auto it:s){
            if(it=='(')
            cnt++;
            else if(it==')')
            cnt--;
            ans=max(ans,cnt);
        }
        return ans;
    }
};