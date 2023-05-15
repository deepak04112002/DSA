//gfg//time-O(3n)//space-O(1)//if interviewer says then O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int ind=-1;
        for(int i=N-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
        reverse(arr.begin(),arr.end());
        return arr;
        }
        for(int i=N-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1,arr.end());
        return arr;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
//leetcode//stl//time-O(n)//space-O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};