#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        sort(a.begin(), a.end());

        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i)
            prefix[i + 1] = prefix[i] + a[i];

        ll total = prefix[n];
        ll max_sum = 0;
        for (int i = 0; i <= k; ++i) {
            ll sum_removed = prefix[2 * i] + (prefix[n] - prefix[n - (k - i)]);
            max_sum = max(max_sum, total - sum_removed);
        }
        cout << max_sum << "\n";
    }
    return 0;
}
