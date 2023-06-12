//time-O(2^n*k)//k-average length of subset
//space-O(2^n)*O(k)
void func(vector<int>&nums,int n,int ind,vector<vector<int>>&ans,vector<int>&ds){

       ans.push_back(ds);
       for(int i=ind;i<nums.size();i++){
           if(i!=ind && nums[i]==nums[i-1])continue;
        ds.push_back(nums[i]);
        func(nums,n,i+1,ans,ds);
        ds.pop_back();
       }
      
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        func(nums,n,0,ans,ds);
        return ans;
    }