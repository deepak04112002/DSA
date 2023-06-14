//time-O(4^n)
//space-O(n)
void func(int ind,int a[],int n,string mapping[],string &output,vector<string>&ans){
        if(ind>=n){
            ans.push_back(output);
            return;
        }
        int number=a[ind];
        string value=mapping[number];
        for(int i=0;i<value.size();i++){
            output.push_back(value[i]);
            func(ind+1,a,n,mapping,output,ans);
            output.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string>ans;
        string output="";
        string mapping[10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        func(0,a,N,mapping,output,ans);
        return ans;
    }