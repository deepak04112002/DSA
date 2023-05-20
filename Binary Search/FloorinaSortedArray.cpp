//time-O(nlogn)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        int ans=-1;
        long long s=0;
        long long e=n-1;
        long long mid=(s+e)/2;
        while(s<=e){
            if(v[mid]==x)
            return mid;
            else if(v[mid]>x)
            e=mid-1;
            else{
                s=mid+1;
                ans=mid;
            }
            mid=(s+e)/2;
        }
        return ans;
        
    }
};
int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}