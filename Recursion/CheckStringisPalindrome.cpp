//gfg
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
    int check(int s,int e,string &x){
        if(s>=e)
        return 1;
        if(x[s]!=x[e])
        return 0;
        return check(s+1,e-1,x);
    }
	int isPalindrome(string S)
	{
	    int n=S.size()-1;
	    return check(0,n,S);
	}

};
int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
//leetcode
class Solution {
public:
    bool check(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
        return 1;

        return 0;
    }
    char toLowercase(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        return ch;
        else{
            char w=ch-'A'+'a';
            return w;
        }
    }
    bool checkPalindrome(string temp){
        int s=0;
        int e=temp.length()-1;
        while(s<=e){
            if(temp[s]!=temp[e])
            return 0;
            else{
            s++;
            e--;}
        }
    
        return 1;
    }
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.length();i++){
            if(check(s[i]))
            temp.push_back(s[i]);
        }
        for(int i=0;i<temp.length();i++){
            temp[i]=toLowercase(temp[i]);
        }
        return checkPalindrome(temp);
    }
};