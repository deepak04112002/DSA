//time-O(n)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string maxOdd(string s) {
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]%2==0)
            s.pop_back();
            else
            break;
        }
        return s;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}