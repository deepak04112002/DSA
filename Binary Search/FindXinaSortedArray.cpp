//time-O(logn)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int s=0;
        int e=n-1;
        int m=(s+e)/2;
        while(s<=e){
            if(arr[m]==k)
            return m;
            else if(arr[m]>k)
            e=m-1;
            else
            s=m+1;
            m=(s+e)/2;
        }
        if(arr[m]!=k)
        return -1;
        return m;
    }
};
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}