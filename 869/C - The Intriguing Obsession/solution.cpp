#include <bits/stdc++.h>
using namespace std;
 
#define mod 998244353
#define int long long
 
int fact[5005], invfact[5005];
 
// Modular exponentiation
int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
// Precompute factorials and inverse factorials
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < 5005; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    for (int i = 0; i < 5005; i++) {
        invfact[i] = power(fact[i], mod - 2); // Fermat's Little Theorem
    }
}
 
// nCr modulo mod
int nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * invfact[r] % mod * invfact[n - r] % mod;
}
 
// Solve function for pair (a, b)
int solve(int a, int b) {
    int res = 0;
    for (int i = 0; i <= min(a, b); i++) {
        res = (res + nCr(a, i) * nCr(b, i) % mod * fact[i] % mod) % mod;
    }
    return res;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    precompute();
 
    int a, b, c;
    cin >> a >> b >> c;
 
    int ab = solve(a, b);
    int bc = solve(b, c);
    int ca = solve(c, a);
 
    int result = ab * bc % mod * ca % mod;
 
    cout << result << '
';
    return 0;
}