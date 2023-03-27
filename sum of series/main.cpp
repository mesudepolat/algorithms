//
//  main.cpp
//  sum of series
//

#include <iostream>
using namespace std;

class Solution{
public:
    long long seriesSum(int n) {
        
        return (long long)n*(n+1)/2;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}

