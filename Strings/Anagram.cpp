//time-O(nlogn)//due to sorting
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isAnagram(string a, string b){
        if(a.size()!=b.size()) return 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){}
            else
            return 0;
        }
        return 1;
    }

};
int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}