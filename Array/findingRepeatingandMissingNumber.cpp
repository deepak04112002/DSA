//better sol//time-O(2n)
//space-O(n)
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n=a.size();
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int repeating=-1,missing=-1;
    for(int i=1;i<=n;i++){
        if(hash[i]==2) repeating=i;
        else if(hash[i]==0) missing=i;
        if(repeating!=-1&&missing !=-1)
        break;

    }
    return {repeating,missing};
}
//optimal//sum//O(n)-time
//space-O(1)
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n=a.size();
    long long Sn=(n*(n+1))/2;
    long long Sn1=(n*(n+1)*(2*n+1))/6;
    long long S=0,S1=0;
    for(int i=0;i<n;i++){
        S+=a[i];
        S1+=(long long)a[i]*(long long )a[i];
    }
    long long val1=S-Sn;
    long long val2=S1-Sn1;
    val2=val2/val1;
    long long x=(val2+val1)/2;
    long long y=x-val1;
    return {(int)x,(int)y};
}
//using xor//time-O(4n)
//space-O(1)
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }
    int bitno=0;
    while(1){
        if((xr&(1<<bitno))!=0)
        break;
        bitno++;
    }
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if((a[i]&(1<<bitno))!=0)
          one =one^a[i];
        else
        zero=zero^a[i];
    }
    for(int i=1;i<=n;i++){
        if((i&(1<<bitno))!=0)
          one =one^i;
        else
        zero=zero^i;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==zero)cnt++;
    }
    if(cnt==2)return {zero,one};
    return {one,zero};
}