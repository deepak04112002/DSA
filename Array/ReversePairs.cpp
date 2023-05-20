//time-O(2n*logn)
//space-O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
     void merge(vector<int>&arr, int low, int mid, int high)
    {
         vector<int> temp;
         int left=low;
         int right=mid+1;
         while(left<=mid&&right<=high){
             if(arr[left]<=arr[right]){
                 temp.push_back(arr[left]);
                 left++;
             }
             else{
                 temp.push_back(arr[right]);
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
    }
    int countPairs(vector<int>&arr,int l,int mid,int h){
        int right=mid+1;
        int cnt=0;
        for(int i=l;i<=mid;i++){
            while(right<=h && arr[i]>2*arr[right])right++;
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    
    int mergeSort(vector<int>&arr, int l, int h)
    {
        int mid=(l+h)/2;
        int cnt=0;
        if(l==h) return cnt;
        cnt+=mergeSort(arr,l,mid);
        cnt+=mergeSort(arr,mid+1,h);
        cnt+=countPairs(arr,l,mid,h);
        merge(arr,l,mid,h);
        return cnt;
    }
    int countRevPairs(int n, vector<int> arr) {
        return mergeSort(arr,0,n-1);
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}