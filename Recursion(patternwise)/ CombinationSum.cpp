//time-O(2^n*nlogn)
//space-O(2^n)
void findCombination(int ind,int B,vector<int> &A,vector<vector<int>>&ans,vector<int>&ds){
      if(ind==A.size()){
          if(B==0)ans.push_back(ds);
          return;
      }
      if(A[ind]<=B){
            ds.push_back(A[ind]);
            findCombination(ind,B-A[ind],A,ans,ds);
            ds.pop_back();
      }

       findCombination(ind+1,B,A,ans,ds);

    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        sort(A.begin(),A.end());
        for(int i=1;i<A.size();i++){
            if(A[i]==A[i-1]){
            A.erase(A.begin()+i);
            i--;}
        }
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,B,A,ans,ds);
        return ans;
        
    }
//time-O(2^n*k)//assumed subsets are of average length k
//space-O(k*x)//x-xcombinations    
void findCombination(int ind,int target,vector<int> candidates,vector<vector<int>>&ans,vector<int>ds){
      if(ind==candidates.size()){
          if(target==0)ans.push_back(ds);
          return;
      }
      if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            findCombination(ind,target-candidates[ind],candidates,ans,ds);
            ds.pop_back();
      }

       findCombination(ind+1,target,candidates,ans,ds);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }