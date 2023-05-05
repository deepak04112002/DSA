#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printGfg(int N) {
        if(N==0)
        return;
        printGfg(N-1);
        cout<<"GFG"<<" ";
    }
};
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        Solution ob;
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}