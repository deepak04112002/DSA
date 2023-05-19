//brute//gfg//return in 2 array after sorting
//time-O(n+m) + O(n+m)
//space-O(n+m)
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long arr3[n+m];
            int left=0;
            int right=0;
            int index=0;
            while(left<n && right<m){
                if(arr1[left]<=arr2[right]){
                    arr3[index]=arr1[left];
                    left++;
                    index++;
                }
                else{
                    arr3[index]=arr2[right];
                    right++;
                    index++;
                }
            }
            while(left<n){
                arr3[index++]=arr1[left++];
            }
            while(right<m){
                arr3[index++]=arr2[right++];
            }
            for(int i=0;i<n+m;i++){
                if(i<n)arr1[i]=arr3[i];
                else arr2[i-n]=arr3[i];
            }
        } 
};
int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
//optimal//time-O(min(n,m))+O(nlogn)+O(mlogm)
//space-O(1)
#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int left=n-1;
            int right=0;
            while(left>=0&&right<m){
                if(arr1[left]>arr2[right]){
                    swap(arr1[left],arr2[right]);
                    left--,right++;
                }
                else
                break;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};
int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
//leetcode//merge array into one array
//time-O(min(n,m))+O(n+m*log(n+m))
//space-O(max(n.m));
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m,j=0;i<n+m,j<n;i++,j++){
            nums1[i]=nums2[j];
        }
        sort(nums1.begin(),nums1.end());
    }
};