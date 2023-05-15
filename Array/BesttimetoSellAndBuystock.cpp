//leetcode//time-O(n)//space-O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi)
            maxi=sum;
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
};
//gfg
#include <bits/stdc++.h>
using namespace std;
void stockBuySell(int *, int);
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        stockBuySell(price, n);
    }
    return 0;
}
void stockBuySell(int arr[], int n) {
    int i=0,profit=0;
    for(int i=0;i<n;i++){
        int flag=0;
        int start=i;
        while(arr[i+1]>arr[i]&& i<n-1){
            flag=1;
            profit=1;
            i++;
        }
        if(flag==1)
        cout<<"("<<start<<" "<<i <<")"<<" ";
    }
    if(profit==0)
    cout<<"No Profit"<<endl;
    else
    cout<<endl;
    
}