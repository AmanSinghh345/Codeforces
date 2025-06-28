#include <bits/stdc++.h>
using namespace std;

bool dfs(long long n, long long m) {
    if (n == m) return true;
    if (n < m || n % 3 != 0) return false;
    return dfs(n / 3, m) || dfs(2 * n / 3, m);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        if (dfs(n, m)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
