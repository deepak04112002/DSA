#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            st.insert(arr2[i]);
        }
        vector<int> v(st.size());
        int i=0;
        for(auto it:st){
            v[i++]=it;
        }
        return v;
    }
};
int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
//time complexity O(n1logn1+n2logn2)+O(n1+n2);
//space complexity O(n1+n2)+O(n1+n2);
//OPTIMIZED
//WITHOUT INTRODUCING SET
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            if(ans.size()==0||ans.back()!=a[i])
            ans.push_back(a[i]);
            i++;
        }
        else{
            if(ans.size()==0||ans.back()!=b[j])
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n1){
     
        if (ans.size() == 0 || ans.back() != a[i])
          ans.push_back(a[i]);
          i++;
      
    }
    while(j<n2){
        if(ans.size()==0||ans.back()!=b[j])
            ans.push_back(b[j]);
            j++;
    }
    return ans;
}
