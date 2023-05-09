#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
class Solution
{
    public:
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int PIindex=partition(arr,low,high);
            quickSort(arr,low,PIindex);
            quickSort(arr,PIindex+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low;
       int j=high;
       while(i<j){
           while(arr[i]<=pivot&&i<=high-1){
               i++;
           }
           while(arr[j]>=pivot&&j>=low+1){
               j--;
           }
           if(i<j)swap(arr[i],arr[j]);
       }
       swap(arr[low],arr[j]);
       return j;
       
    }
};
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
//Time Complexity is Nlog(n);
//space complexity is O(1);