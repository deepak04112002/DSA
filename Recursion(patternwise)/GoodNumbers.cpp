//gfg
//time-O((R - L + 1) * log10(R))
//space-O(n)//n-number of valid numbers
bool isValid(int i,int D){
        int sum=0;
        while(i){
            int z=i%10;
            if(z==D)return false;
            sum+=z;
            i/=10;
            if(i==0)break;
            z=i%10;
            if(z<=sum)return false;
        }
        return true;
    }
    vector<int> goodNumbers(int L, int R, int D) {
        vector<int> v;
        for(int i=L;i<=R;i++){
            if(isValid(i,D))v.push_back(i);
        }
        return v;
    }
//leetcode
//time-O(logn)
//space-(1)  
long long power(long long  x,long long y){
        if(y==0) return 1;
        long long ans=power(x,y/2);
        ans*=ans;
        ans%=mod;//1000000007
        if(y%2)
        ans*=x;
        ans%=mod;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n/2+n%2;
        return (power(5,even)*power(4,odd))%mod;
    }  