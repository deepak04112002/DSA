#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi)
            maxi=arr[i];
        }
        return maxi;
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
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}