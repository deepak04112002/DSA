//time-O(logn)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    int s=1;
	    int e=m;
	    int mid=(s+e)>>1;
	    while(s<=e){
	        if(pow(mid,n)==m)
	        return mid;
	        else if(pow(mid,n)>m)
	        e=mid-1;
	        else
	        s=mid+1;
	        mid=(s+e)>>1;
	    }
	    return -1;
	}  
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}