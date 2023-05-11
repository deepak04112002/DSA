#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0)
	        ans.push_back(arr[i]);
	    }
	    int x=ans.size();
	    for(int i=0;i<x;i++){
	        arr[i]=ans[i];
	    }
	    for(int i=x;i<n;i++){
	        arr[i]=0;
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
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
//LeetCode
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
            swap(nums[i],nums[x]);
            x++;
            }
        }
    }
};