//Brute//-O(n)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if(arr[0]>arr[1])
       return 0;
       for(int i=0;i<n;i++){
       if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
           return i;
       }
        return n-1;
    }
};
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}
		
	}

	return 0;
}
//optimal bs
//time-O(logn)
//space-O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid=(s+e)/2;
        while(s<e){
            if(mid==0){
                if(nums[0]>=nums[1])
                return 0;
                else return 1;
            }
            if(mid==n-1){
                if(nums[n-1]>=nums[n-2])
                return n-1;
                else return n-2;
            }
            if(nums[mid]>=nums[mid-1]&&nums[mid]>=nums[mid+1])
            return mid;
            else if(nums[mid]<nums[mid-1])
            e=mid-1;
            else
            s=mid+1;
            mid=(s+e)/2;
        }
        return s;
    }
};