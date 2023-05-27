//time-O(n*m)//n-all arrays are checked //m-max length of prefix string
//space-O(m)//extra space for storing the prefix sum
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    string prefix(string a,string b){
        string num="";
        int n=min(a.size(),b.size());
        for(int i=0;i<n;i++){
            if(a[i]==b[i])
            num+=a[i];
            else
            break;
        }
        return num;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans="";
        if(N==1) return arr[0];
        for(int i=0;i<N;i++){
            if(i==0){
                ans=prefix(arr[i],arr[i+1]);
                i++;
            }
            else{
                ans=prefix(ans,arr[i]);
            }
        }
        
        if(ans=="") return "-1";
        return ans;
    }
};
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}