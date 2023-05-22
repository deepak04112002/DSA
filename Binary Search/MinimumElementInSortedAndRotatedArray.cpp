//time-O(logn)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMin(int arr[], int n){
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        int minVal=INT_MAX;
        while(s<=e){
            if(arr[s]<arr[e]){
            minVal=min(minVal,arr[s]);
            break;
            }
            if(arr[s]<=arr[mid]){
                minVal=min(minVal,arr[s]);
                s=mid+1;
            }
            else{
                minVal=min(minVal,arr[mid]);
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return minVal;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}