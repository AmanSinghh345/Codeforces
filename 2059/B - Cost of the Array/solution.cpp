#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
 
using namespace std;
using namespace __gnu_pbds;
 
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define MOD (1000000007)
#define INF 1000000000000000000LL // Infinity for ll
#define mp make_pair
#define nline '
'
#define yes cout << "YES
"
#define no cout << "NO
"
 
template <typename T>
using os = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <typename T>
using oms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
// read question properly
// don't forget newlines!!!!!!
// take care about cin >> t;
// comment the optimization before debugging
// ALWAYS USE FIXED << SETPRECISION WHILE OUTPUTTING FLOATS
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    ia(a, n);
    if (n == k)
    {
        ll b[k / 2];
        for (ll i = 1; i < n; i += 2)
        {
            b[i / 2] = a[i];
        }
        f(i, n / 2)
        {
            if (b[i] != i + 1)
            {
                cout << i + 1 << nline;
                return;
            }
        }
        cout << n / 2 + 1 << nline;
    }
    else
    {
        if (count(a + 1, a + n - k + 2, 1) == n - k + 1)
        {
            cout << 2 << nline;
        }
        else
        {
            cout << 1 << nline;
        }
    }
}
 
int main()
{
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long t = 1;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
#ifdef PRADY
    cout << "
Time taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}