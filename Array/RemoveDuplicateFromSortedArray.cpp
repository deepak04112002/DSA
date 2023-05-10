//gfg
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i=0;
        for(int j=1;j<n;j++){
            if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
            }
        }
        return i+1;
    }
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
//Leetcode
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};