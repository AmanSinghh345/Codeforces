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
{ // con
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    int ydiff = q - y;
    if (ydiff < 0)
    {
        cout << -1 << endl;
        return;
    }
    int newx = x + ydiff;
    int newy = y + ydiff;
    if (p > newx)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << (newx - p) + ydiff << endl;
        return;
    }
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