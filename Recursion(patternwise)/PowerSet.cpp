//time-O(2^n * n * log(n))
//space-(2^n-1)excluding null
void func(vector<string>&ans,string s,int n,int ind,string curr_str){
	        if(ind==n){
	            ans.push_back(curr_str);
	            return;
	        }
	        func(ans,s,n,ind+1,curr_str+s[ind]);
	        func(ans,s,n,ind+1,curr_str);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    func(ans,s,s.size(),0,"");
		    sort(ans.begin(),ans.end());
		    ans.erase(ans.begin());
		    return ans;
		}
//time-O(2^n*n)
//space-O(2^n*n)//including null
void func(vector<int>nums,vector<vector<int>>&ans,int ind,vector<int>res){
        if(ind>=nums.size()){
            ans.push_back(res);
            return;
        }
        func(nums,ans,ind+1,res);

        int element=nums[ind];
        res.push_back(element);
        func(nums,ans,ind+1,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        func(nums,ans,0,res);
        return ans;
    }        