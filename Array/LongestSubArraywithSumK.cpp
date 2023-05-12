//brute//O(n^2)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int len=0;
    for(int i=0;i<a.size();i++){
      int s=0;
      for(int j=i;j<a.size();j++){
        s+=a[j];
        if(s==k){
          len=max(len,j-i+1);
        }
      }
    }
    return len;
}
//better//O(nlogn)//for array containg positive,negative numbers//O(n)//space complexity
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    long long sum=0;
    int maxlen=0;
    map<long long,int> mp;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k)
        maxlen=max(maxlen,i+1);
        long long rem=sum-k;
        if (mp.find(rem) != mp.end()) {
          int len = i - mp[rem];
          maxlen=max(maxlen,len);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    return maxlen;
}
//optimized//for all positive numbers //O(2n)//because the 2nd while loop only run for small subarrays//O(1)//space complexity
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left=0;
    int right=0;
    long long sum=a[0];
    int maxlen=0;
    int n=a.size();
    while(right<n){
      while(left<=right&&sum>k){
        sum-=a[left];
        left++;
      }
      if(sum==k)
      maxlen=max(maxlen,right-left+1);
      
      right++;
      if(right<n)sum+=a[right];
    }
    return maxlen;
}
