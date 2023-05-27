//time-O(n)
//space-O(1)
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int num=1;
        int n=nums.size();
        int i=0;
        while(i<n && k>0){
            if(nums[i]==num)
            i++;
            else
            k--;
            num++;
        }
        while(k--){
            num++;
        }
        return num-1;
    }
};
//time-O(logn)
//space-O(1)
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
       int s=0;
       int e=nums.size()-1;
       while(s<=e){
           int mid=(s+e)>>1;
           int missing=nums[mid]-(mid+1);
           if(missing<k)
           s=mid+1;
           else
           e=mid-1;
       }
       return k+s;
    }
};
//if range is more in missing number eg-32,55,57
//time-O(logn)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
int KthMissingElement(int a[], int n, int k);
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}
int KthMissingElement(int a[], int n, int k)
{
    int s=0;
    int e=n-1;
    if(a[n-1]==n-1+a[0]) return -1;
    while(s<=e){
        int mid=(s+e)>>1;
        if(a[mid]-(mid+a[0])<k)
        s=mid+1;
        else 
        e=mid-1;
    }
    return s+k-1+a[0]>a[n-1] ? -1:s+k-1+a[0];
}
