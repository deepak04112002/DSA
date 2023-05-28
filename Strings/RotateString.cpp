//time-O(n)//lenght of string
//space-O(n)//storing the string in another string
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        string w=s;
        for(int i=0;i<s.size();i++){
            w+=s[i];
            w.erase(w.begin());
            if(w==goal)
            return 1;
        }
        return 0;
    }
};