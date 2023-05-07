#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
class Solution
{
    public:
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<=n-2;i++){
           int mini=i;
           for(int j=i;j<=n-1;j++){
               if(arr[j]<arr[mini])
               mini=j;
           }
           int temp=arr[mini];
           arr[mini]=arr[i];
           arr[i]=temp;
       }
    }
};
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
//time complexity O(N^2) for all worst,best ,average case;