//gfg//anti-clockwise//time-O(n^2)//space-O(n^2)
#include <bits/stdc++.h> 
using namespace std; 
class Solution
{   
    public:
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        vector<vector<int> > temp=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=temp[j][n-1-i];
            }
        }
    } 
};
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
//leetcode//clockwise//time-O(n/2*n/2)//space-O(n*n/2)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose
        int n=matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};