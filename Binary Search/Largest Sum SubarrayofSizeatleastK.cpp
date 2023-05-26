//time-O(n)
//space-O(n)
#include <bits/stdc++.h>
using namespace std;
long long int maxSumWithK(long long int a[], long long int n, long long int k);
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        cout << maxSumWithK(a, n, k) << endl;
    }
    return 0;
}
long long int maxSumWithK(long long int a[], long long int n, long long int k) 
{
    long long int sum=0;
    long long int ans=INT_MIN;
    long long int last=0;
    int i=0;
    int j=0;
    while(j<n){
        sum+=a[j];
        if(j-i+1<k)
        j++;
        else if(j-i+1==k){
            ans=max(sum,ans);
            j++;
        }
        else if(j-i+1>k){
            ans=max(ans,sum);
            last+=a[i];
            i++;
            if(last<0){
                sum-=last;
                ans=max(ans,sum);
                last=0;
            }
            j++;
        }
      
    }
      return ans;
}
//time-O(nlogn)
//space-O(1)
class Solution {
public:
    bool check(vector<int>& nums,int k,int mid){
        int cnt=1;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>mid)return 0;
            sum+=nums[i];
            if(sum>mid){
                cnt++;
                sum=nums[i];
                if(cnt>k) return 0;
            }
        }
        return 1;
    }
    int splitArray(vector<int>& nums, int k) {
        int s=0;
        int e=1e9;
        int ans=INT_MAX;
        while(s<=e){
            int mid=(s+e)>>1;
            if(check(nums,k,mid)){
                ans=min(ans,mid);
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return ans;
    }
};