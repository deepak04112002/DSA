//time-O(logn)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int s=0;
	    int e=n-1;
	    int mid=(s+e)/2;
	    int ans1=-1,ans2=0;
	    while(s<=e){
	        if(arr[mid]==x){
	        ans1=mid;
	        e=mid-1; 
	        }
	        else if(arr[mid]>x)
	        e=mid-1;
	        else
	        s=mid+1;
	        mid=(s+e)/2;
	    }
	    if(ans1!=-1){
	        int s=0;
	        int e=n-1;
	        int mid=(s+e)/2;
	        while(s<=e){
	            if(arr[mid]==x){
	                s=mid+1;
	                ans2=mid;
	            }
	            else if(arr[mid]>x)
	            e=mid-1;
	            else
	            s=mid+1;
	            mid=(s+e)/2;
	        }
	        return ans2-ans1+1;
	    }
	    return 0;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}