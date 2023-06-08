//time-O(n)
//space-O(1)
int recursion(string&str,int index,int res){
        if(index==str.size())
        return res;
        if(str[index]<'0' || str[index]>'9')
        return -1;
        int digit=str[index]-'0';
        
        return recursion(str,index+1,res*10+digit);
    }
    int atoi(string str) {
        int n=str.size();
        if(n==0)
        return -1;
        int sign=1;
        int index=0;
        if(str[0]=='-')
        sign=-1,index=1;
        if(index<n && (str[index]=='-' || str[index]=='+' || str[index]>=97))
        return -1;
        
        return recursion(str,index,0)*sign;
    }