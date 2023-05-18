//Brute//O(n^3)-time//O(logn)-space
#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set <vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
              if (arr[i] + arr[j] + arr[k] == 0) {
                vector<int>v={arr[i],arr[j],arr[k]};
                 sort(v.begin(),v.end());
                 st.insert(v);
              }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
//best//O(n^2)-time//O(n)-space
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> hashset;
            for(int j=i+1;j<n;j++){
               int rem=-(nums[i]+nums[j]);
               if(hashset.find(rem)!=hashset.end()){
                   vector<int>temp={nums[i],nums[j],rem};
                   sort(temp.begin(),temp.end());
                   st.insert(temp);
               }
               hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
        
    }
};
//optimal//time-O(n^2)+O(nlogn)//space-O(no of unique triplets)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){k--;}
                else if(sum<0){j++;}
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1])j++;
                    while(j<k&&nums[k]==nums[k+1])k--;
                }
            }
        }
        return ans;
    }
};
//gfg//O(n^2)//O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int closest3Sum(int arr[], int n, int x)
    {
        int res=0;
        int diff=INT_MAX;
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==x)
                return sum;
                else if(sum < x) j++;
                else k--;
                if(abs(x-sum) < diff){
                    diff = abs(x-sum);
                    res = sum;
                    
                }
            }
        }
        
        return res;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
