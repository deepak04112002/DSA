#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printNos(int N) {
        int i=N;
        if(N==0)
        return;
        cout<<i<<" ";
        i--;
        printNos(N-1);
        
    }
};
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        Solution ob;
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}