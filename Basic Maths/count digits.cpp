#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        vector<int> v;
        int z;
        int F=N;
        while(N>0){
            z=N%10;
            v.emplace_back(z);
            N=N/10;
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                if(F%v[i]==0)
                 cnt++;
            }
            
        }
        return cnt;
        
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
