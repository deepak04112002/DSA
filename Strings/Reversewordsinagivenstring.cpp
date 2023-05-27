//time-O(n)//n-length of string
//space-O(n)//n=n size string stored in stack
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string reverseWords(string S) 
    { 
        stack<char>st;
        string ans="";
        for(int i=S.size()-1;i>=0;i--){
            if(S[i]!='.')
            st.push(S[i]);
            else{
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back('.');
            }
        }
        while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
            }
        return ans;
    } 
};
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
//removing extra space from front and end and also from inbetween also
//time-O(n)
//space-O(n)
class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans="";
        int start=0;
        while(start<s.size() && s[start]==' ')
        start++;
        int end=s.size()-1;
        while(end>=0 && s[end]==' ')
        end--;

        bool space=0;
        for(int i=end;i>=start;i--){
            if(s[i]!=' '){
            st.push(s[i]);
            space=0;
            }
            else if(!space){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back(' ');
                space=1;
            }
        }
        while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
        return ans;        
    }
};