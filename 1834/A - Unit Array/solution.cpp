#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
 
//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;
 
void answertoProb()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll pos = 0;
    ll neg = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    ll ans = 0;
    while (neg > pos || neg % 2 == 1)
    {
        ans++;
        neg--;
        pos++;
    }
    cout << ans << "
";
 
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        answertoProb();
    }
    return 0;
}