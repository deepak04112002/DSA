//gfg//better//O(2n)//space-O(1);
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int cnt0=0;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            cnt0++;
            else if(a[i]==1)
            cnt1++;
            else
            cnt2++;
        }
        for(int i=0;i<cnt0;i++){
            a[i]=0;
        }
        for(int i=cnt0;i<cnt1+cnt0;i++){
            a[i]=1;
        }
        for(int i=cnt1+cnt0;i<n;i++){
            a[i]=2;
        }
    }
    
};
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
//leetcode//optimized//3 pointer
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=nums.size()-1;
        while(j<=k){
            if(nums[j]==0){
            swap(nums[j],nums[i]);
            j++;
            i++;
            }
            else if(nums[j]==1)
            j++;
            else if(nums[j]==2){
                swap(nums[j],nums[k]);
                 k--;
            }
        }
    }
};