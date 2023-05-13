//Best Sol
//Leetcode//O(nlogn)//O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int s=nums[i];
            int rem=target-s;
            if(mp.find(rem)!=mp.end())
            return {i,mp[rem]};
            mp[s]=i;
        }
        return {-1,-1};
    }
};
//if only we want to check the sum//optimal solution is
//O(n)+)(nlogn)//time complexity
//O(1)//if it sorted else O(n) if not sorted is cosidered
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=book[left]+book[right];
        if(sum==target) return "YES";
        else if(sum>target)right--;
        else if(sum<target)left++;
    }
    return "NO";
}
//Find all pairs with a given sum
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    static bool cmp(pair<int,int>a,pair<int,int> b){
        return a.first<b.first;
    }
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    { 
        vector<pair<int,int>> ans;
        unordered_set<int> s;
        for(int i=0;i<N;i++){
            s.insert(A[i]);
        }
        for(int i=0;i<M;i++){
            if(s.find(X-B[i])!=s.end())
            ans.push_back({X-B[i],B[i]});
        }
        sort(ans.begin(),ans.end(),cmp);
        return ans;
        
    }
};
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
