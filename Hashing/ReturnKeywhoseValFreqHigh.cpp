#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
class Solution {
  public:
   static bool compare(pi p1,pi p2){
       if(p1.second==p2.second)return (p1.first>p2.first);
       else return p1.second>p2.second;
   }
    vector<int> topK(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pi> freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(),compare);
        
        for(int i=0;i < k; i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
    
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}