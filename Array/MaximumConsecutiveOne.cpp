//gfg//convert given no of zeros to 1 to get longest subarray
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int zerocnt=0;
        int ans=0;
        int i=0;
        for(int j=0;j<n;j++){
            if(arr[j]==0)
            zerocnt++;
            while(zerocnt>m){
                if(arr[i]==0)
                zerocnt--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }  
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
//Leetcode only largest length of consecutive ones in an array
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
            }
            else
            cnt=0;
        }
        return maxi;
    }
};