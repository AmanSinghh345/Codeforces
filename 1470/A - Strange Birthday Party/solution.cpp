#include <bits/stdc++.h>
using namespace std;
 
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
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
 
ll modpow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a)
{
    return modpow(a, MOD - 2);
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    vector<int> cash(m + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> cash[i];
    vector<pair<int, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back({a[i], cash[a[i]]});
    }
    sort(arr.begin(), arr.end(), [](auto &a, auto &b)
         {
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second; });
 
    int l = 1;
    ll cost = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second > cash[l] && l <= m)
        {
            cost += cash[l];
            l++;
        }
        else
        {
 
            cost += arr[i].second;
        }
    }
    cout << cost << endl;
    return;
}
 
int main()
{
    fastio();
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}