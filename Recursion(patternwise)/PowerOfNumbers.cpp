//time-O(n)
//space-O(1)
long long power(int N,int R)
    {
       long long res=1;
   
       while(R)
          if(R%2)res=1LL*res*N%mod,R--;
          else N=1LL*N*N%mod,R/=2;
        return res;
        
    }
//time-O(n)//if(negative power is present)
//space-O(1)
    double myPow(double x, int n) {
        double ans=1.0;
        long long nn=n;
        if(nn<0)nn=-1*nn;
        while(nn){
            if(nn%2){
                ans=ans*x;
                nn=nn-1;
            }
            else{
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0)ans=(double)1/(double)ans;
        return ans;
    }