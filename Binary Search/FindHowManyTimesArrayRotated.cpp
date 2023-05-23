//time-log(n)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int s=0;
	    int e=n-1;
	    int mid=(s+e)>>1;
	    while(s<=e){
	       if(mid<e && arr[mid]>arr[mid+1])
	       return mid+1;//+1 because indexing from 0;
	       if(mid>s && arr[mid]<arr[mid-1])
	       return mid-1+1;//same as above
	       if(arr[s]>arr[mid])
	       e=mid-1;
	       else
	       s=mid+1;
	       mid=(s+e)>>1;
	    }
	    return 0;
	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}