//Leetcode//O(n^2)-time//O(n^2)-space
class Solution {
public:
    
    vector<int> generateRow(int r){
        long long ans=1;
        vector<int>ansR;
        ansR.push_back(1);
        for(int i=1;i<r;i++){
            ans=ans*(r-i);
            ans=ans/i;
            ansR.push_back(ans);
        }
        return ansR;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
//gfg
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        
        vector<ll> ans;
        long long int M = 1e9+7;
        long long ans1=1;
        ans.push_back(1);
        for(int i=1;i<n;i++){
            ans1=ans1*(n-i);
            ans1=ans1/i;
            ans1=ans1%M;
            ans.push_back(ans1);
        }
        return ans;
           
    }
};
void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}