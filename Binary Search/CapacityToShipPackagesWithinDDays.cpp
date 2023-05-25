//time-O(N*log(Sum of weights - max(list of weights))
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool weight(int arr[],int n,int d,int mid){
        int sum=0;
        int day=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                day++;
                sum=arr[i];
            }
        }
        day++;
        if(day<=d) return 1;
        else return 0;
    }
    int leastWeightCapacity(int arr[], int n,int d) {
        int s=*max_element(arr,arr+n);
        int e=0;
        for(int i=0;i<n;i++){
            e+=arr[i];
        }
        int ans=0;
        while(s<=e){
            int mid=(s+e)>>1;
            if(weight(arr,n,d,mid)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}