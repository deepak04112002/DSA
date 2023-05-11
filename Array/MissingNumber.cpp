//gfg
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int missingNumber(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
//N-1 because array is 1 size smaller//
int missingNumber(int A[], int N)
{
    int x=N*(N+1);
    int y=x/2;
    int sum=0;
    for(int i=0;i<N-1;i++){
        sum=sum+A[i];
    }
    return y-sum;
}
//codestudio
int missingNumber(vector<int>&a, int N) {
    int xor1=0;
    int xor2=0;
    for(int i=0;i<N-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1 ^ N;
    return xor1 ^ xor2;
}