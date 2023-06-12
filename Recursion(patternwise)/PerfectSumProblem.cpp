//time-O(2^n)
//space-O(1)
int count(int arr[],int n,int sum,int ind,int s){
	    if(s>sum)return 0;
	    if(ind==n){
	        if(s==sum) return 1;
	        else return 0; 
	    }
	    s+=arr[ind];
	    s%=mod;
	    int l=count(arr,n,sum,ind+1,s);
	    s-=arr[ind];
	    s%=mod;
	    int r=count(arr,n,sum,ind+1,s);
	    
	    return l+r;
	}
	int perfectSum(int arr[], int n, int sum)
	{
      return count(arr,n,sum,0,0);
       
	}