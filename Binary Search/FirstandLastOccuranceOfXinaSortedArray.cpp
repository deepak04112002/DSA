//time-O(logn)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[],int n,int x){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>x)
        e=mid-1;
        else
        s=mid+1;
        mid=(s+e)/2;
    }
    return ans;
}
int lastOccurance(int arr[],int n,int x){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>x)
        e=mid-1;
        else
        s=mid+1;
        mid=(s+e)/2;
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    int ans1=firstOccurance(arr,n,x);
    int ans2=lastOccurance(arr,n,x);
    return {ans1,ans2};
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
//using upper and lower bound
//time-O(logn)
//space-O(1)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=-1;
        int ans2=-1;
        int ind1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(ind1!=nums.size() && nums[ind1]==target)
        ans1=ind1;
        int ind2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        ind2--;
        if(ind2>=0&&nums[ind2]==target)
        ans2=ind2;

        return {ans1,ans2};
    }
};