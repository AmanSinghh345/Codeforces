#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

typedef vector<int> vi;

void solve() {
    int maxi, n;
    cin >> maxi >> n;

    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    string target = "";
    for(int i = 0; i < n; i++) target += to_string(a[i]);

    string window = "";
    int ans = 0;
    int cnt = 1;

    for(int line = 0; line < maxi; line++) {
        for(int i = 1; i <= cnt; i++) {
            window += (i + '0');
            if(window.size() > n) window.erase(0, 1);
            if(window == target) ans++;
        }
        cnt++;
    }

    cout << ans << endl;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
