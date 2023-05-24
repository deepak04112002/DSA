//time-O(nlogm)//logm-for BS//n-for cnt
//space-O(1)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=1e9;
        int ans=-1;
        int n=piles.size();
        while(s<=e){
            int mid=(s+e)>>1;
            long cnt=0;
            for(int i=0;i<n;i++){
                cnt+=(piles[i]/mid);
                if(piles[i]%mid!=0)
                cnt+=1;
            }
            if(cnt<=h){
                e=mid-1;
                ans=mid;
            }
            else{
                s=mid+1;
                ans=s;
            }
        }
        return ans;
    }
};