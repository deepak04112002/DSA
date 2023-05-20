//time-O(n*m)//brute sol
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int maxi=0;
	    int ans=-1;
	    for(int i=0;i<n;i++){
	        int cnt=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1)
	            cnt++;
	        }
	        if(maxi < cnt){
                maxi = cnt;
                ans = i;
            }
	    }
	   
	    return ans;
	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
//optimal //time-O(n+m)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int s=0;
	    int e=m-1;
	    int ans=-1;
	    while(s<n&&e>=0){
	        if(arr[s][e]==1){
	        ans=s;         
	        e--;
	        }
	        else
	        s++;
	    }
	    return ans;
	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}