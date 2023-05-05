//codeStudio//not recursion using 2 pointer
#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int s=m+1;
    int e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}
//striver
void reverse(int i,int arr[],int n){
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    return reverse(i+1,arr,n);
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
