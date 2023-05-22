//gfg//time-O(nlogn)//doesnt affect the bs because outside loop+O(logn)//overall time-O(logn)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool Search(int n, vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==k)
            return true;
            else if(arr[mid]>k)
            e=mid-1;
            else 
            s=mid+1;
            mid=(s+e)/2;
        }
        return false;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
//time-O(logn)
//space-O(1)
class Solution {
public:
    bool search(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int s=0;
        int n=arr.size();
        int e=n-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==k)
            return true;
            if((arr[s]==arr[mid])&&(arr[mid]==arr[e]))s++,e--;
            else if(arr[s]<=arr[mid]){
                if(k>=arr[s]&&k<=arr[mid])e=mid-1;
                else
                s=mid+1;
            }
            else {
                if(k>=arr[mid]&&k<=arr[e])s=mid+1;
                else
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return false;
    }
};