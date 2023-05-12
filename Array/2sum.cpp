//Best Sol
//Leetcode//O(nlogn)//O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int s=nums[i];
            int rem=target-s;
            if(mp.find(rem)!=mp.end())
            return {i,mp[rem]};
            mp[s]=i;
        }
        return {-1,-1};
    }
};