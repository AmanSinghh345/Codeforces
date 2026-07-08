#include <bits/stdc++.h>
using namespace std;
 
// Fast I/O
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
// Function to calculate maximum Fibonacciness for a single test case
int maxFibonacciness(int a1, int a2, int a4, int a5) {
    // Possible values for a3
    vector<int> possible_a3 = {a1 + a2, a4 - a2, a5 - a4};
    int maxFib = 0;
 
    // Test each possible value of a3
    for (int a3 : possible_a3) {
        int fibCount = 0;
        if (a3 == a1 + a2) fibCount++; // Check i = 1
        if (a4 == a2 + a3) fibCount++; // Check i = 2
        if (a5 == a3 + a4) fibCount++; // Check i = 3
        maxFib = max(maxFib, fibCount);
    }
 
    return maxFib;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << maxFibonacciness(a1, a2, a4, a5) << endl;
    }
    return 0;
}