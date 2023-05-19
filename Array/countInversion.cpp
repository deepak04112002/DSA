//timr-O(nlogn)
//space-O(n)//only have to cnt=mid-left+1 in mergesorted array
//return the cnt
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
  
    long long merge(long long  arr[], long long low, long long mid, long long high)
    {
         vector<long long> temp;
         long long left=low;
         long long right=mid+1;
         long long cnt=0;
         while(left<=mid&&right<=high){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
                 cnt+=mid-left+1;
                 right++;
             }
         }
         while(left<=mid){
             temp.push_back(arr[left]);
             left++;
         }
         while(right<=high){
             temp.push_back(arr[right]);
             right++;
         }
         for(int i=low;i<=high;i++){
             arr[i]=temp[i-low];
         }
         return cnt;
    }
    public:
    long long mergeSort(long long arr[], long long l, long long r)
    {
        long long cnt=0;
        long long mid=(l+r)/2;
        if(l==r) return cnt;
        cnt+=mergeSort(arr,l,mid);
        cnt+=mergeSort(arr,mid+1,r);
        cnt+=merge(arr,l,mid,r);
        return cnt;
    }
    long long int inversionCount(long long arr[], long long N)
    {
         return mergeSort(arr,0,N-1);
        
    }

};
int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}