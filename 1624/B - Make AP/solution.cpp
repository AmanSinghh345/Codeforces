#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 
    // Check if directly an AP
    if (b - a == c - b) {
        cout << "YES" << endl;
        return;
    }
 
    // Check if we can replace b to form AP
    if ((a + c) % 2 == 0) {
        int B = (a + c) / 2;
        if (B % b == 0) {
            cout << "YES" << endl;
            return;
        }
    }
 
    // Check if we can replace c to form AP
    if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
        cout << "YES" << endl;
        return;
    }
 
    // Check if we can replace a to form AP
    if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
        cout << "YES" << endl;
        return;
    }
 
    // If none of the above conditions hold
    cout << "NO" << endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}