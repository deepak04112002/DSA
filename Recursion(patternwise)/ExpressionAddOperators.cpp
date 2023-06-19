//time-O(|S|*4^|S|)//4^s beacause (+,-,*,no operation)//s-length of string
//space-O(|s|*3^|S|)
void find(int ind,string num,int target,vector<string>&ans,string temp,long long prev,long long res){
        if(ind==num.size()){
            if(res==target)
            ans.push_back(temp);
            return;
        }
        string st="";
        long long curr=0;
        for(int i=ind;i<num.size();i++){
            if(i>ind && num[ind]=='0')break;
            st+=num[i];
            curr=curr*10+num[i]-'0';
            if(ind==0)
            find(i+1,num,target,ans,temp+st,curr,curr);
            else{
                find(i+1,num,target,ans,temp+'+'+st,curr,res+curr);
                find(i+1,num,target,ans,temp+'-'+st,-curr,res-curr);
                find(i+1,num,target,ans,temp+'*'+st,curr*prev,res-prev+prev*curr);
            }
        }
        return;
    }
    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        string temp="";
        long long prev=0;
        find(0,num,target,ans,temp,prev,0);
        return ans;
    }