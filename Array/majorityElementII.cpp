//gfg//time-O(nlogn)//space-O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>n/3)
            ans.push_back(it.first);
        }
        if(ans.size()==0)
        ans.push_back(-1);
        
        return ans;
        
        
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
//codestudio//time-O(2n)//O(1)
#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int cnt1=0,cnt2=0;
	int el1=INT_MIN;
	int el2=INT_MIN;
	for(int i=0;i<v.size();i++){
          if (cnt1 == 0 && el2 != v[i]) {
			cnt1++;
            el1 = v[i];
          }
		  else if(cnt2==0 && el1!=v[i]){
			  cnt2++;
			  el2=v[i];
		  }
		  else if(el1==v[i])
			  cnt1++;
		  
		  else if(el2==v[i])
			  cnt2++;
		  else{
			  cnt1--;
			  cnt2--;
		  }
        }
		vector<int>ans;
		cnt1=0;
		cnt2=0;
		for(int i=0;i<v.size();i++){
		if(el1==v[i])cnt1++;
		if(el2==v[i])cnt2++;
		}
		int mini=(int)(v.size()/3)+1;
		if(cnt1>=mini)ans.push_back(el1);
		if(cnt2>=mini)ans.push_back(el2);
		sort(ans.begin(),ans.end());
		return ans;
	
}