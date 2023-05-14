//gfg//time complexity O(n)//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long currentSum=arr[0];
        long long maxi=arr[0];
        for(int i=1;i<n;i++){
            currentSum=max((long long)arr[i],arr[i]+currentSum);
            if(currentSum>maxi)
            maxi=currentSum;
        }
        return maxi;
    }
};
int main()
{
    int t,n;
    cin>>t
    while(t--) 
    {
        cin>>n; 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
//leetcode
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi)
            maxi=sum;
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
};