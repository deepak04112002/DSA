//Leetcode//O(N)-time//O(1)-space
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
              x=x^(nums[i]);
        }
         return x;
    }
};
//codeStudio//O(logn)-time//O(1)-space
#include<vector>
int getSingleElement(vector<int> &arr){
	int s=0;
	int e=arr.size()-2;
	while(s<=e){
		int mid=(s+e)>>1;//(s+e)/2;
		if(arr[mid]==arr[mid^1])
		s=mid+1;
		else
		e=mid-1;
	}	
	return arr[s];
}
//if it is a even number will get nxt odd.
//if it is a odd number will get previous even.