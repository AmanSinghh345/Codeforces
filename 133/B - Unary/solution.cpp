#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string p;
    cin >> p;
    
    map<char, int> m = {
        {'>', 8}, {'<', 9}, {'+', 10}, {'-', 11},
        {'.', 12}, {',', 13}, {'[', 14}, {']', 15}
    };
    
    long long ans = 0;
    int mod = 1000003;
    
    for(char c : p) {
        ans = (ans * 16 + m[c]) % mod;
    }
    
    cout << ans << endl;
    
    return 0;
}