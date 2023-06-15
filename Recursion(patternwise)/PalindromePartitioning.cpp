//time-O(n^3)
//space-O(2^n)
bool isPalindrome(int s,int e,string str){
        while(s<=e){
            if(str[s++]!=str[e--])return 0;
        }
        return 1;
    }
    void func(int ind,string s,vector<vector<string>>&ans,vector<string>&output){
        if(ind==s.size()){
            ans.push_back(output);
            return;
        }
        for(int i=ind;i<s.size();++i){
            if(isPalindrome(ind,i,s)){
                output.push_back(s.substr(ind,i-ind+1));
                func(i+1,s,ans,output);
                output.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>output;
        func(0,s,ans,output);
        return ans;
    }