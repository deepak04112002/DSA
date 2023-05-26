//time-O(nlogn)//logn for BS//n for liner search cnt
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int> &stalls,int k,int mid,int n){
        int cnt=1;
        int cordinate=stalls[0];
        for(int i=1;i<n;i++){
            if((stalls[i]-cordinate)>=mid){
                cnt++;
                cordinate=stalls[i];
            }
            if(cnt==k)
            return 1;
        }
        return 0;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int s=1;
        int e=stalls[n-1]-stalls[0];
        int ans=0;
        while(s<=e){
            int mid=(s+e)>>1;
            if(check(stalls,k,mid,n)){
                ans=mid;
                s=mid+1;
            }
            else
            e=mid-1;
        }
        return ans;
    }
};

int main() {
    int t = 1;
    cin >> t;



    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;
    }

    return 0;
}