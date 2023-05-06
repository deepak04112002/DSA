//leetcode
class Solution {
public:
    int fib(int n) {
        if(n<=1)
        return n;
        return fib(n-1)+fib(n-2);
    }
};
//gfg
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
        vector<long long> v;
        long long int a=1,b=1;
        if(n>=1)
        v.push_back(1);
        if(n>=2)
        v.push_back(1);
        for(int i=2;i<n;i++){
            v.push_back(a+b);
            long long int c=a+b;
            a=b;
            b=c;
        }
        return v;
    }
};
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        vector<long long> ans = obj.printFibb(n);
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}