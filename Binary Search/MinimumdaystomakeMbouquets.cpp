//time-O(N.log(maxVal)),maxVal = max(bloomDay),N=bloomDay.size()
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool boquet(vector<int> &bloomDay,int m,int k,int mid){
        int n=bloomDay.size();
        int flo=0;
        int boq=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid)
            flo++;
            else
            flo=0;
            if(flo>=k){
                boq++;
                flo=0;
            }
        }
        if(boq>=m) return 1;
        return 0;
    }
    int solve(int m, int k, vector<int> &bloomDay){
      int s=*min_element(bloomDay.begin(),bloomDay.end());
      int e=*max_element(bloomDay.begin(),bloomDay.end());
      int ans=-1;
      if(bloomDay.size()<(long long)m*k) return -1;
      while(s<=e){
          int mid=(s+e)>>1;
          if(boquet(bloomDay,m,k,mid)){
          ans=mid;
          e=mid-1;          
          }
          else
          s=mid+1;
      }
      return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}