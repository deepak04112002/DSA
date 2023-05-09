#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int largest=arr[0];
	    int slargest=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>largest){
	            slargest=largest;
	            largest=arr[i];
	        }
	        else if(arr[i]<largest&&arr[i]>slargest){
	            slargest=arr[i];
	        }
	    }
	    return slargest;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
//Codestudio
//find 2nd largest and 2nd smallest element
int secondLargest(vector<int> &a,int n){
   int largest=a[0];
   int slarge=-1;
   for(int i=1;i<n;i++){
       if(a[i]>largest){
           slarge=largest;
           largest=a[i];
       }
       else if(a[i]<largest&&a[i]>slarge){
           slarge=a[i];
       }
   }
   return slarge;
}
int secondSmallest(vector<int> &a,int n){
        int smallest=a[0];
        int ssmall=INT_MAX;
        for(int i=1;i<n;i++){
            if(a[i]<smallest){
                ssmall=smallest;
                smallest=a[i];
            }
            else if(a[i]>smallest&&a[i]<ssmall){
                ssmall=a[i];
            }
        }
        return ssmall;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest=secondLargest(a,n);
    int ssmallest=secondSmallest(a,n);
    return {slargest,ssmallest};
}
