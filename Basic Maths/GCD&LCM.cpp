#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        //lcm(a,b)=(a*b)/gcd(a,b);
        vector<long long>v;
        long long ans=0;
        long long C=A;
        long long D=B;
        while(A>0&&B>0){
            if(A>B)
            A=A%B;
            else
            B=B%A;
        }
        if(A==0)
        ans=B;
        else
        ans=A;
        long long z=C*D;
        long long lcm=abs(z)/ans;
        v.push_back(lcm);
        v.push_back(ans);
        return v;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}