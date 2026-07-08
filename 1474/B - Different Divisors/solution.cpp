#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
 
vector<bool> prime(10000005, true); 
 
void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < (int)prime.size(); i++) {
        if (prime[i]) {
            for (int j = i * i; j < (int)prime.size(); j += i) {
                prime[j] = false;
            }
        }
    }
}
 
void solve() {
    int d;
    cin >> d;
    ll second = 0, third = 0;
    
    for (ll i = d + 1; i < (int)prime.size(); i++) {
        if (prime[i]) { second = i; break; }
    }
    for (ll i = second + d; i < (int)prime.size(); i++) {
        if (prime[i]) { third = i; break; }
    }
    cout << second * third << "
";
}
 
int main() {
    fastio();
    sieve();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}