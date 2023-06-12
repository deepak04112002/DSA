//time-O(2^n)
//space-O(2^n)
void findSubset(vector<int>&arr,int n,int ind,int sum,vector<int>&ans){
        if(ind==n){
            ans.push_back(sum);
            return;
        }
        findSubset(arr,n,ind+1,sum+arr[ind],ans);
        findSubset(arr,n,ind+1,sum,ans);
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        findSubset(arr,N,0,0,ans);
        return ans;
    }