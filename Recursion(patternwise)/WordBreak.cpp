//time-O(2^n)
//space-O(n)
int help(int ind,string s,set<string>&wordDict){
        if(ind==s.size())return 1;
        string temp;
        for(int i=ind;i<s.size();i++){
            temp+=s[i];
            if(wordDict.find(temp)!=wordDict.end()){
                if(help(i+1,s,wordDict))return 1;
            }
        }
        return 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        for(auto a:wordDict)st.insert(a);
        return help(0,s,st);
    }
//dp
//time-O(n^2)
//space-O(n+m)
int dp[301];
    int help(int ind,string s,set<string>&wordDict){
        if(ind==s.size())return 1;
        string temp;
        if(dp[ind]!=-1)return dp[ind];
        for(int i=ind;i<s.size();i++){
            temp+=s[i];
            if(wordDict.find(temp)!=wordDict.end()){
                if(help(i+1,s,wordDict))return dp[ind]=1;
            }
        }
        return dp[ind]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        memset(dp,-1,sizeof dp);
        for(auto a:wordDict)st.insert(a);
        return help(0,s,st);
    }