//gfg//time-O(nlogn)+O(n)
//spzce-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr,arr+N);
      int longest=1;
      int cnt=0;
      int small=INT_MIN;
      for(int i=0;i<N;i++){
          if(arr[i]-1==small){
              cnt++;
              small=arr[i];
          }
          else if(arr[i]!=small){
              cnt=1;
              small=arr[i];
          }
          longest=max(longest,cnt);
      }
      return longest;
    }
};
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}//leetcode//O(1)-time best case//O(3n)-time worst case
//space-O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int> st;
        for(int i=0;i<nums.size();i++){
             st.insert(nums[i]);
        }
        int largest=1;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x=x+1;
                }
                largest=max(largest,cnt);
            }
        }
        return largest;
        
    }
};