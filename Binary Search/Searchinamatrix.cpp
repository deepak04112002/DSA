//time-O(n+m)
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int matSearch (vector <vector <int>> &arr, int n, int m, int x)
	{
	    int s=0;
	    int e=m-1;
	    int ans=0;
	    while(s<n && e>=0){
	        if(arr[s][e]==x){
	        ans=1;
	        break;
	        }
	        if(arr[s][e]>x)
	        e--;
	        else
	        s++;
	        
	    }
	    return ans;
	    
	}
};
int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}