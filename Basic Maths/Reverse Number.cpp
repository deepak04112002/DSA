//gfg
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
                                                                  
    long long reversedBits(long long X) {
        vector<long long> v;
        while(X>0){
            long long z=X%2;
            v.push_back(z);
            X=X/2;
        }
        while(v.size()<32)
         v.push_back(0);
         
        int power=31;
        long long ans=0;
        for(auto it:v){
            if(it)
            ans=ans+pow(2,power);
            power--;
        }
        
        
        return ans;
    
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
//leetcode
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int z=x%10;
            if(ans>INT_MAX/10||ans<INT_MIN/10)
            return 0;
            ans=ans*10+z;
            x=x/10;
        }
        return ans;
    }
};