#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
const ll MOD1 = 1000000007;
const ll MOD2 = 1000000009;
const ll BASE = 31;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s, bad;
    cin >> s >> bad;
    int k;
    cin >> k;
 
    int n = s.size();
 
    // prefix bad count
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + (bad[s[i] - 'a'] == '0');
    }
 
    // powers
    vector<ll> p1(n + 1, 1), p2(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        p1[i] = (p1[i - 1] * BASE) % MOD1;
        p2[i] = (p2[i - 1] * BASE) % MOD2;
    }
 
    // prefix hash
    vector<ll> h1(n + 1, 0), h2(n + 1, 0);
    for (int i = 0; i < n; i++) {
        h1[i + 1] = (h1[i] * BASE + (s[i] - 'a' + 1)) % MOD1;
        h2[i + 1] = (h2[i] * BASE + (s[i] - 'a' + 1)) % MOD2;
    }
 
    unordered_set<unsigned long long> st;
    st.reserve(2000000);
    st.max_load_factor(0.7);
 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (pref[j + 1] - pref[i] > k) break;
 
            ll x1 = (h1[j + 1] - h1[i] * p1[j - i + 1] % MOD1 + MOD1) % MOD1;
            ll x2 = (h2[j + 1] - h2[i] * p2[j - i + 1] % MOD2 + MOD2) % MOD2;
 
            // combine two hashes into one 64-bit number
            unsigned long long combined = (x1 << 32) | x2;
            st.insert(combined);
        }
    }
 
    cout << st.size() << "
";
    return 0;
}