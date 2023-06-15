//time-O(n!)
//space-O(n^2)
bool isSafe(int row,int col,vector<string> output,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(output[row][col]=='Q')return false;
            col--;
            row--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0 ){
            if(output[row][col]=='Q')return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0 && row<n){
            if(output[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void func(int col,int n,vector<vector<string>>&ans,vector<string>&output){
        if(col==n){
            ans.push_back(output);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(i,col,output,n)){
                output[i][col]='Q';
                func(col+1,n,ans,output);
                output[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>output(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            output[i]=s;
        }
        func(0,n,ans,output);
        return ans;
    }