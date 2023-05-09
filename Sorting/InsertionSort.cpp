#include <stdio.h>
#include <math.h>
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
    void insertionSort(int arr[], int n)
    {
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0&&arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
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
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
//Time Complexity O(N^2) for worst and average case.
//O(N)for best case.//Time Complexity is same for both but iterative take less memory space compared to recursive one.

//Recursion
#include <stdio.h>
#include <math.h>
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
    void insertionSort(int arr[], int n)
    {
        if(n<=1)
        return;
        for(int i=0;i<=n-1;i++){
            int j=i;
            if((arr[j-1]>arr[j])&&j>0){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
        insertionSort(arr,n-1);
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
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}