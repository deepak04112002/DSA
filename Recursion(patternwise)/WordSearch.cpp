//time-O(N * M * 4^L)//n-row//m-column//l-length of word
//space-O(L)
 bool func(vector<vector<char>>& board,string word,int i,int j,int ind){
        if(ind==word.size()){
            return true;
        }
        if(i<0 || j<0 ||i>=board.size()|| j>=board[0].size()||word[ind]!=board[i][j]){
            return false;
        }
        char temp=board[i][j];
        board[i][j]='@';
        bool a=func(board,word,i-1,j,ind+1);
        bool b=func(board,word,i+1,j,ind+1);
        bool c=func(board,word,i,j-1,ind+1);
        bool d=func(board,word,i,j+1,ind+1);
        board[i][j]=temp;
        
        return (a||b||c||d);
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && func(board,word,i,j,0))
                return true;
            }
        }
        return false;
    }