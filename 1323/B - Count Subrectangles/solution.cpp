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
 
vector<pair<int, int>> getFact(int k)
{
    vector<pair<int, int>> res;
    bool mid = false;
    for (int i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            if (i == k / i and mid == false)
            {
                res.push_back({i, k / i});
                mid = true;
                continue;
            }
            res.push_back({i, k / i});
            res.push_back({k / i, i});
        }
    }
    sort(res.begin(), res.end());
    return res;
}
// find the total subarray with sum x
int find(vector<int> &arr, int target)
{
    map<int, int> mp;
    mp[0] = 1;
 
    int pref = 0;
    int cnt = 0;
 
    for (int val : arr)
    {
        if (val == 0)
        {
            pref = 0;
            mp.clear();
            mp[0] = 1;
            continue;
        }
 
        pref += val;
        cnt += mp[pref - target];
        mp[pref]++;
    }
 
    return cnt;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
 
    vector<pair<int, int>> factorial = getFact(k);
 
    vector<int> blockA, blockB;
    int one = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one++;
        else
        {
            if (one > 0)
                blockA.push_back(one);
            one = 0;
        }
    }
    if (one > 0)
        blockA.push_back(one);
    one = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] == 1)
            one++;
        else
        {
            if (one > 0)
                blockB.push_back(one);
            one = 0;
        }
    }
    if (one > 0)
        blockB.push_back(one);
 
    vector<ll> cntA(40005, 0);
    vector<ll> cntB(40005, 0);
    for (int x : blockA)
    {
        for (int len = 1; len <= x; len++)
        {
            cntA[len]+=x-len+1;
        }
    }
    for (int x : blockB)
    {
        for (int len = 1; len <= x; len++)
        {
            cntB[len]+=x-len+1;
        }
    }
    ll ans = 0;
    for (auto it : factorial)
    {
        int row = it.first;
        int col = it.second;
        if(row<=n && col<=m){
        ll x = cntA[row];
        ll y = cntB[col];
        // cout<<row<<": "<<x<<" "<<col<<": "<<y<<endl;
        ans += (1LL*x * y);
        }
    }
    cout << ans << endl;
}
 
int main()
{
    fastio();
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}