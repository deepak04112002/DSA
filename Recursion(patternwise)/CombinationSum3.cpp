//time-O(2^k)
//space-O(k)
void func(int k,int n,int ind,vector<vector<int>> &ans,vector<int> &ds){
        if(ds.size()==k && n==0){
                ans.push_back(ds);
                return;
        }
        if(ds.size()>k)return;
        for(int i=ind;i<=9;i++){
            if(i<=n){
            ds.push_back(i);
            func(k,n-i,i+1,ans,ds);
            ds.pop_back();}
            else return;
        }
    }
    vector<vector<int>> combinationSum(int K, int N) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        func(K,N,1,ans,ds);
        return ans;
    }