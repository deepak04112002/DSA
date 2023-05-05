#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
long long f(int i){
    if(i==0)return 1;
    return i*f(i-1);
}
    vector<long long> factorialNumbers(long long N)
    {
        int i=1;
        vector<long long> v;
        while(f(i)<=N){
            v.push_back(f(i));
            i++;
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}