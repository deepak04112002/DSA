//best sol//O(nlogn)+O(2n)-time
//space-O(n)
#include<bits/stdc++.h>
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	int n=arr.size();
    for(int i=0;i<n;i++){
		int start=arr[i][0];
		int end=arr[i][1];
                if (!ans.empty() && end <= ans.back()[1]) {
                  continue;
                }
                for(int j=i+1;j<n;j++){
                  if (arr[j][0] <= end) {
                    end = max(end, arr[j][1]);
                  } 
				  else {
                    break;
                  }
                }
                ans.push_back({start, end});
        }

	return ans;
}
//optimal sol//time-O(nlogn)+O(n)
//space-O(n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(ans.empty()||arr[i][0]>ans.back()[1])
            ans.push_back(arr[i]);
            else
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
        return ans;
    }
};