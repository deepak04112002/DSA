//time-O(32 * R * log(C))
//Space- O(1))
#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
     int countsmallerthanMid(vector<int>&arr,int mid){
         int l=0;
         int h=arr.size()-1;
         while(l<=h){
             int md=(l+h)>>1;
             if(arr[md]<=mid)
             l=md+1;
             else h=md-1;
         }
         return l;
     }
    int median(vector<vector<int>> &arr, int R, int C){
        int s=0;
        int e=10e9;
        int n=arr.size();//R
        int m=arr[0].size();//C
        while(s<=e){
            int mid=(s+e)>>1;
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=countsmallerthanMid(arr[i],mid);
            }
            if(cnt<=(n*m)/2)
            s=mid+1;
            else
            e=mid-1;
        }
        return s;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}