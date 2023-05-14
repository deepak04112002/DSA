//gfg//time complexity O(nlogn)+O(n)
//space complexity O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        map<int,int> mp;
        for(int i=0;i<size;i++){
            mp[a[i]]++;
        }
        for(auto it:mp){
            if(it.second>size/2)
            return it.first;
        }
        return -1;
    }
};
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
//leetcode//optimized sol//time complexity O(N)//space complexity-O(1)//time complexity is O(n)+O(n)if there does not exixt a majority element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(el==nums[i])
            cnt++;
            else
            cnt--;
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
              if(nums[i]==el)
              cnt1++;
        }
        if(cnt1>nums.size()/2)
        return el;
        return -1;
    }
};