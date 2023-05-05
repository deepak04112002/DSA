#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long sumOfSeries(long long N) {
        if(N==0)
        return 0;
        long long z=pow(N,3);
        return z+sumOfSeries(N-1);
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}