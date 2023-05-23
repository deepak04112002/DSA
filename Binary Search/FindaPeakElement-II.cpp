//2D-matrix
//time-O(mlogn)
//space-O(1)
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();

        int i=0;
        int j=m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            int up=i-1<0 ? -1:arr[i-1][j];
            int down=i+1>=n ? -1:arr[i+1][j];
            int left=j-1<0 ? -1:arr[i][j-1];
            int right=j+1>=m ? -1:arr[i][j+1];

            if(arr[i][j]>up && arr[i][j]>down  && arr[i][j]>left && arr[i][j]>right )
            return {i,j};

            int maxm=max({up,down,left,right});

            if(maxm==up)i--;
            if(maxm==down)i++;
            if(maxm==left)j--;
            if(maxm==right)j++;
        }
        return {-1,-1};
    }
};