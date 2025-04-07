#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;

void answertoProb()
{
    int n, x;
    cin >> n >> x;
    vector<int> gas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    int tank = 0, mini = INT_MAX;
    auto first = gas.begin();
    auto last = gas.end();

    for (int i = 0; i <= x; i++)
    {
        if (i == 0)
            tank = 0;
        else
            tank--;
        mini = min(tank, mini);
        auto it = find(first, last, i);

        if (it != last)
        {
            tank = 0;
        }
    }
    int re = tank;
    for (int i = x; i >= 0; i--)
    {
        if (i == x)
            tank = re;
        else
            tank--;
        mini = min(mini, tank);
        auto it = find(first, last, i);

        if (it != last)
        {
            tank = 0;
        }
    }
    cout << abs(mini) << endl;
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