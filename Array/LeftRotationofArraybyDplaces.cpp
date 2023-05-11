#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   k=k%n;
	   int temp[k];
	   for(int i=0;i<k;i++){
	       temp[i]=arr[i];
	   }
	   for(int j=k;j<n;j++){
	       arr[j-k]=arr[j];
	   }
	   
	   for(int i=n-k;i<n;i++){
	       arr[i]=temp[i-(n-k)];
	   }
	   
	   
	} 
		 

};
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}
//Leetcode
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[(i+k)%nums.size()]=nums[i];
        }
        nums=ans;
    }
};
//Can also be done by space complexity O(1)//Time-O(2n)
#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}