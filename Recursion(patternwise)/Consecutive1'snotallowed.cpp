//time-O(n)
//space-O(1)
ll countStrings(int n) {
	    int zeroend=1;
	    int oneend=1;
	    int sum=zeroend+oneend;
	    int i=2;
	    while(i<=n){
	        oneend=zeroend%mod;
	        zeroend=sum%mod;
	        sum=zeroend+oneend%mod;
	        i++;
	    }
	    return sum%mod;
	}