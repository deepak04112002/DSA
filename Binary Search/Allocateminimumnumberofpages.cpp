//time-O(nlogn)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    bool check(int A[],int N,int M,int mid){
        int cnt=1;
        int sum=0;
        for(int i=0;i<N;i++){
            if(A[i]>mid) return 0;
            if(sum+A[i]>mid){
                cnt++;
                sum=A[i];
            }
            else
            sum+=A[i];
        }
       if(cnt>M) return 0;
      return 1;
    }
    int findPages(int A[], int N, int M) 
    {
        int s=*min_element(A,A+N);
        int e=0;
        for(int i=0;i<N;i++){
            e+=A[i];
        }
        if(M>N) return -1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)>>1;
            if(check(A,N,M,mid)){
                ans=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
     return ans;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}