//time-O(logn)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int l=0;
        int r=n-1;
        while(l <= r) {
            int m = l+(r-l)/2;
            
            if((m%2==0 && arr[m]==arr[m+1]) || (m%2==1 && arr[m]==arr[m-1])) 
                l = m+1;
                else r = m-1;
        }
        
        return arr[l];
        
    }
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
//using xor-time-O(logn)
//space-O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int s=0;
        int e=arr.size()-2;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==arr[mid^1])
            s=mid+1;
            else
            e=mid-1;
            mid=(s+e)/2;
        }
        return arr[s];
    }
};