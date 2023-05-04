#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string armstrongNumber(int n){
        int temp=n;
        int ans=0;
        while(n>0){
            int z=n%10;
            ans=ans+pow(z,3);
            n=n/10;
        }
        if(temp==ans)
        return ("Yes");
        else
        return ("No");
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
