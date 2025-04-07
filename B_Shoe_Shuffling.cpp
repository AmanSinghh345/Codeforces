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
typedef vector<long long> vll;
typedef map<int,int> mii;

void answertoProb()
{
    ll n;
        cin >> n;
        vll s(n), p(n);
        for (ll i = 0; i < n; ++i)
            cin >> s[i];

        ll l = 0, r = 0;
        bool ans = true;
        for (ll i = 0; i < n; ++i)
            p[i] = i + 1;

        while (r < n)
        {
            while (r < n - 1 and s[r] == s[r + 1]) // get range [l,r] with equal values
                ++r;
            if (l == r)
                ans = false;
            else
                rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1); // rotate right in range [l,r]
            l = r + 1;
            ++r;
        }
        if (ans)
        {
            for (auto &x : p)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
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