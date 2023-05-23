//time-O(logn)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {  
        int s=1;
        int e=x;
        long long int mid=(s+e)>>1;
        int ans=-1;
        while(s<=e){
            long long int t=mid*mid;
            if(t==x){
            return mid;
            }
            else if(t>x)
            e=mid-1;
            else{
                s=mid+1;
                ans=mid;
            }
            mid=(s+e)>>1;
        }
        return ans;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}