//time-O(logn)
//space-o(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==k)
            return mid;
            else if(arr[mid]>k){
                if(mid==0)return 0;
                else if(arr[mid-1]<k)return mid;
                else e=mid-1;
            }
            else{
                if(mid==n-1)return n;
                else s=mid+1;
            }
            mid=(s+e)/2;
            
        }
        return mid;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}