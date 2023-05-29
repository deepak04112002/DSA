//time-O(n^2)
//space-O(1)
class Solution {
public:
    string longestPalindrome(string s) {
        int l,h;
        int start=0,end=1;
        for(int i=1;i<s.size();i++){
            l=i-1;
            h=i;
            while(l>=0 && h<s.size() && s[l]==s[h]){
                  if(h-l+1>end){
                      start=l;
                      end=h-l+1;
                  }
                  l--;
                  h++;
            }
            l=i-1;
            h=i+1;
            while(l>=0 && h<s.size() && s[l]==s[h]){
                  if(h-l+1>end){
                      start=l;
                      end=h-l+1;
                  }
                  l--;
                  h++;
            }
        }
        return s.substr(start,end);
    }
};