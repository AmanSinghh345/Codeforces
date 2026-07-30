#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define endl '
'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
 
using vi = vector<int>;
using vl = vector<ll>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
 
const ll MOD = 1e9 + 7;
 
ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a) {
    return modpow(a, MOD - 2);
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<pair<int, int>> coordinates;
    vector<long long > xcoor;
    vector<long long > ycoor;
 
    int minX = INT_MAX, minY = INT_MAX;
    int maxX = INT_MIN, maxY = INT_MIN;
 
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
 
        coordinates.push_back({x, y});
 
        minX = min(minX, x);
        minY = min(minY, y);
        maxX = max(maxX, x);
        maxY = max(maxY, y);
    }
 
    for (auto &[x, y] : coordinates) {
        xcoor.push_back(x - minX);
        ycoor.push_back(y - minY);
    }
 
    sort(xcoor.begin(), xcoor.end());
    sort(ycoor.begin(), ycoor.end());
 
    ll xcontri= xcoor[n/2]-xcoor[(n-1)/2]+1;
    ll ycontri=ycoor[n/2]-ycoor[(n-1)/2]+1;
    cout << xcontri*ycontri<< endl;
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