//time-O(nlogn)//logn-BS//n-For sum
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int smallestDivisor(vector<int>& nums, int k) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int ans=-1;
        int n=nums.size();
        while(s<=e){
            int mid=(s+e)>>1;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=nums[i]/mid;
                if(nums[i]%mid!=0)
                sum+=1;
            }
            if(sum<=k){
            e=mid-1;
            ans=mid;    
            }
            else{
            s=mid+1;
            ans=s;        
            }
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
    }
    return 0;
}