#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n, 0);  // Initialize b with 0s
    map<int, int> freq;
    int maxFreq = 0;
    int currentMode = a[0];

    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
        freq[a[i]]++;
        if (freq[a[i]] > maxFreq) {
            maxFreq = freq[a[i]];
            currentMode = a[i];
        }

        for (int j = 0; j < i; ++j) {
            if (freq[b[j]] < maxFreq) {
                freq[b[j]]--;
                b[j] = currentMode;
                freq[currentMode]++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
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
