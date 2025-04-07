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
    string s;
    cin >> s;
    int ab = 0;
    int ba = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            ab++;
        if (s[i] == 'b' && s[i + 1] == 'a')
            ba++;
    }
    if (ab == ba)
    {
        cout << s << endl;
        return;
    }
    s[0] = s[s.size() - 1];
    cout << s << endl;

    return;
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