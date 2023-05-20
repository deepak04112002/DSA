//gfg//time-O(n)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(int arr[], int n, int x);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    int floor=-1,ceil=-1;
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==x)
        return {arr[mid],arr[mid]};
        else if(arr[mid]<x){
            s=mid+1;
            floor=arr[mid];
        }
        else{
            e=mid-1;
            ceil=arr[mid];
        }
        mid=(s+e)/2;
    }
    return {floor,ceil};
}