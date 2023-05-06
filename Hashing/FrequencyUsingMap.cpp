//numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[aee[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<" ";
    }
}
//character
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(inti=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mp[ch]<<endl;
    }
}
//Time complexity in worst,average,best is Log(n); always
//unodered_map
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(inti=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mp[ch]<<endl;
    }
}
//Time complexity is O(1)for best and average case.
//O(N) for worst case.