#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute the sum of all x that maximize f(x)
long long solve(long long a, long long b, int k) {
    // Determine the maximum value of f(x)
    long long max_f = 0;
    for (int i = 0; i < k; i++) {
        long long mask = 1LL << i;
        long long f = ((a ^ mask) & (b ^ mask));
        if (f > max_f) {
            max_f = f;
        }
    }

    // Sum all x that achieve the maximum f(x)
    long long sum = 0;
    for (long long x = 0; x < (1LL << k); x++) {
        long long f = ((a ^ x) & (b ^ x));
        if (f == max_f) {
            sum = (sum + x) % MOD;
        }
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        int k;
        cin >> a >> b >> k;
        cout << solve(a, b, k) << "\n";
    }

    return 0;
}