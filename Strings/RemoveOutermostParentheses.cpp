//time-O(n)
//space-O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeOuter(string& s) {
        int cnt=0;
        string ans="";
        bool flag=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            cnt++;
            else if(s[i]==')')
            cnt--;
            if(cnt==1&&flag==1){
                flag=0;
                continue;
            }
            if(cnt==0&&flag==0){
                flag=1;
                continue;
            }
            ans+=s[i];
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}