//time-O(logn)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(int arr[], int l, int h, int k){
        
        int s=l;
        int e=h;
        int mid=(s+e)/2;
        while(s<=e){
           if(arr[mid]==k) return mid;
           if(arr[s]<=arr[mid]){
            if(k>=arr[s]&&k<=arr[mid]){
                e=mid-1; 
            }
            else{
              s=mid+1;  
            }
            }
            else{
            if(k>=arr[mid]&&k<=arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
             
              }
              mid=(s+e)/2;
        }
        return -1;
        
    }
};
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}