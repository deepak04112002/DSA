//time-O(2^n)//due to backtracking
//space-O(n)storing the final string
    void func(vector<string>&ans,int n,int open,int close,string curr_string){
        if(curr_string.size()==2*n){
            ans.push_back(curr_string);
            return;
        }
        if(open<n)func(ans,n,open+1,close,curr_string+"(");
        if(close<open)func(ans,n,open,close+1,curr_string+")");
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        func(ans,n,0,0,"");
        return ans;
    }