#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){}
            else
            return false;
        }
        return true;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
//Leetcode
//checkArraySorted and rotated once
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
            count++;
            }
            if(nums[n-1]>nums[0])
            count++;
        
        return count<=1;
    }
};