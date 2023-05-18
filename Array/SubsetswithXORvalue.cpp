//gfg//O(N*M)-time
//space-O(n*m)
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int rec(int i,int x,vector<int> &arr,int n,int k){
        if(i==n){
            if(x==k)return 1;
            else return 0;
        }
        int a1=rec(i+1,x^arr[i],arr,n,k);
        int a2=rec(i+1,x,arr,n,k);
        return a1+a2;
    }
    int subsetXOR(vector<int> arr, int n, int k) {
        return rec(0,0,arr,n,k);
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}
//codestudio//optimal solution//time-O(nlogn)
//space-O(n)
#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int cnt=0;
    int xr=0;
    map<int,int>mp;
    mp[xr]++;
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        
        int x=xr^b;
        cnt+=mp[x];
        mp[xr]++;
    }
    return cnt;
}