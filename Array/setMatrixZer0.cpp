//gfg//O(2*(n*m))//space-O(n*m)//in this zero is added to top,bottom,left,right number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int> > temp=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==0){
                  
                   if(i+1<n){
                       matrix[i][j]+=temp[i+1][j];
                       matrix[i+1][j]=0;
                   }
                   if(i-1>=0){
                       matrix[i][j]+=temp[i-1][j];
                       matrix[i-1][j]=0;
                   }
                   if(j+1<m){
                       matrix[i][j]+=temp[i][j+1];
                       matrix[i][j+1]=0;
                   }
                   if(j-1>=0){
                       matrix[i][j]+=temp[i][j-1];
                       matrix[i][j-1]=0;
                   }
                    
                }
               
            }
        }
    }
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
//leetcode//zero is not added to any top,bottom,left,right
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0)
                    matrix[0][j]=0;
                    else
                    col0=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<m;i++)matrix[0][i]=0;
        }
        if(col0==0){
        for(int i=0;i<n;i++)
        matrix[i][0]=0;
        }
    }
};