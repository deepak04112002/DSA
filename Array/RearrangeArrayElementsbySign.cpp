//Leetcode//time-O(n)//space-O(n);
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int pos=0;
        int neg=1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]>0){
          ans[pos]=nums[i];
          pos+=2;
        }
        else{
            ans[neg]=nums[i];
            neg+=2;
        }
        }
        return ans;
    }
};
//gfg//time-O(n)+O(min(pos,neg))+O(leftovers)
//overall-time-O(2n)
//space-O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>pos,neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)
	        pos.push_back(arr[i]);
	        else
	        neg.push_back(arr[i]);
	    }
	    if(pos.size()>neg.size()){
	        for(int i=0;i<neg.size();i++){
	            arr[2*i]=pos[i];
	            arr[2*i+1]=neg[i];
	        }
	        int index=2*neg.size();
	        for(int i=neg.size();i<pos.size();i++){
	            arr[index]=pos[i];
	            index++;
	        }
	    }
	    else{
	        for(int i=0;i<pos.size();i++){
	            arr[2*i]=pos[i];
	            arr[2*i+1]=neg[i];
	        }
	        int index=2*pos.size();
	        for(int i=pos.size();i<neg.size();i++){
	            arr[index]=neg[i];
	            index++;
	        }
	    }
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}