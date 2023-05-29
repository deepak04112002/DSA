//time-O(n)
//space-O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    long long int solve(string &s, int n, int k){
    int i=0,j=0;
    long long int ans=0;
    long long int dist=0;
    int cnt[26]={0};
    while(j<n){
        cnt[s[j]-'a']++;
        if(cnt[s[j]-'a']==1)
        dist++;
        while(dist>k){
            cnt[s[i]-'a']--;
            if(cnt[s[i]-'a']==0)
            dist--;
            i++;
        }
        ans+=j-i+1;
        j++;
        
    }
    return ans;
}
    long long int substrCount (string s, int k) {
    	   int n = s.size();
        return solve(s, n, k) - solve(s, n, k - 1);
    }
};
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}