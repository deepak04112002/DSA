#include <bits/stdc++.h> 
using namespace std;
class Solution{
    public:
    int searchInSorted(int arr[], int N, int K) 
    { 
       for(int i=0;i<N;i++){
           if(arr[i]==K)
           return 1;
       }
       return -1;
       
    }
};
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 