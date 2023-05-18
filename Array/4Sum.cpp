//best sol//time-O(n^3log(no of distinct element))
//space-O(n)+O(quads)*2//one forstoring element and other for returning it
#include<bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& arr, int target) {
    set<vector<int>> st;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long> hash;
            for(int k=j+1;k<n;k++){
                long long sum=arr[i]+arr[j];
                sum+=arr[k];
                long long fourth=target-sum;
                if(hash.find(fourth)!=hash.end()){
                    vector<int>temp={arr[i],arr[j],arr[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hash.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
//optimal//O(n^3)-time
//space//O(no of quads)
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int target) {
        vector<vector<int> > ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>0&&arr[i]==arr[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1&&arr[j]==arr[j-1])continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=arr[i];
                    sum+=arr[j];
                    sum+=arr[k];
                    sum+=arr[l];
                    if(sum==target){
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l&&arr[k]==arr[k-1])k++;
                        while(k<l&&arr[l]==arr[l+1])l--;
                    }
                    else if(sum>target)l--;
                    else k++;
                }
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}