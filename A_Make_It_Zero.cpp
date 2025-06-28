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
    int n;
    cin >> n;
    vector<int> arr(n);
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    if (n & 1)
    {
        cout << "4" << endl;
        cout << "1" << " " << n - 1 << endl;
        cout << "1" << " " << n - 1 << endl;
        cout << n - 1 << " " << n << endl;
        cout << n - 1 << " " << n << endl;
    }
    else
    {
        cout << "2" << endl;
        cout << "1" << " " << n << endl;
        cout << "1" << " " << n << endl;
    }
    //  cout<<77<<endl;
    //  cout<<77<<endl;

    //  cout<<77<<endl; //  cout<<77<<endl;

    //  cout<<77<<endl;
    //  cout<<77<<endl;
    //  cout<<77<<endl;
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