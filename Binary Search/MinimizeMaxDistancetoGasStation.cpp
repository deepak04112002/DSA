//time-O(N*log K)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int K){
      sort(stations.begin(),stations.end());
      int n=stations.size();
      double s=0;
      double e=stations[n-1]-stations[0];
      double ans=-1;
      while(s+1e-6<e){
          double mid=(s+e)/2.0;
          int cnt=0;
          for(int i=0;i<n-1;i++){
              cnt+=(stations[i+1]-stations[i])/mid;
          }
          if(cnt>K)
          s=mid;
          else{
              ans=mid;
              e=mid;
          }
      }
      return (ans*100)/100;
    }
};
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
      cin >> stations[i];
    }
    int k;
    cin >> k;
    Solution obj;
    cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k) << endl;
  }
  return 0;
}