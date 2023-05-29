//time-O(n^2)
//space-O(1)
class Solution {
public:
    int beauty(vector<int> &hash){
        int h=-1;
        int l=1e6;
        for(int i=0;i<hash.size();i++){
            h=max(h,hash[i]);
            if(hash[i]>=1){
                l=min(l,hash[i]);
            }
        }
        return h-l;
    }
    int beautySum(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>hash(26,0);
            for(int j=i;j<n;j++){
                hash[s[j]-'a']++;
                ans+=beauty(hash);
            }
        }
        return ans;
    }
};