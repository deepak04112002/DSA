//gfg
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int ans=0;
		    int temp=n;
		    while(n!=0){
		        int z=n%10;
		        ans=ans*10+z;
		        n=n/10;
		    }
		    if(ans==temp)
		    return ("Yes");
		    else
		    return ("No");
		}
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
//leetcode
class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        int ans=0;
        if(x<0)
        return false;
        while(x>0){
            int z=x%10;
            if(ans>INT_MAX/10||ans<INT_MIN/10)
            return 0;
            ans=ans*10+z;
            x=x/10;
        }
        if(ans==temp)
        return true;
        else
        return false;
    }
};