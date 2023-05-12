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
//if only we want to check the sum//optimal solution is
//O(n)+)(nlogn)//time complexity
//O(1)//if it sorted else O(n) if not sorted is cosidered
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=book[left]+book[right];
        if(sum==target) return "YES";
        else if(sum>target)right--;
        else if(sum<target)left++;
    }
    return "NO";
}
