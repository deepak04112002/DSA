//time-O(n)//n-length of string
//space-O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int atoi(string str) {
        //Your code here
     int ans=0,neg=0;
     for(int i=0;i<str.size();i++){
         if(str[i]>='0'&& str[i]<='9')
         ans=(10*ans)+(str[i]-'0');
         else{
         if(i==0 && str[i]=='-'){
             neg=1;
             continue;
         }
         else return -1;
         }
     }
     if(neg==0)
     return ans;
     else
     return -ans;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
//time-O(logn)//space in front or back or inbetween also sign convention
//space-O(1)
class Solution {
public:
    int myAtoi(string s) {
        int len=s.size();
        int i=0;
        double num=0;
        while(i<=len && s[i]==' '){
            i++;
        }
        bool positive=s[i]=='+';
        bool negative=s[i]=='-';

        positive==true ? i++:i;
        negative==true ? i++:i;
        while(i<=len && s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            i++;
        }
        num=negative ? -num:num;

        num=(num>INT_MAX) ? INT_MAX:num;
        num=(num<INT_MIN) ? INT_MIN:num;

        return int(num);
    }
};