#include <bits/stdc++.h>
using namespace std;
 
// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
// Macros
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define foor(i) for (int i = 0; i < n; i++)
 
// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;
 
void answertoProb()
{
    int n;
    cin >> n;
    vi arr(n);
    foor(i)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (auto it : arr)
    {
        mpp[it]++;
    }
    if (mpp.size() == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        // map is sorted by keys
        int smallest = begin(mpp)->first;
        int times = begin(mpp)->second;
        cout << times << " " << n - times << endl; // Adding space between the two integers
        for (int i = 0; i < times; i++)
        {
            cout << smallest << " "; // Adding space after each number
        }
        cout << endl; // Adding newline after the first set of numbers
        mpp.erase(smallest);
        for (auto &[e, f] : mpp)
        {
            for (int i = 0; i < f; i++)
            {
                cout << e << " "; // Adding space after each number
            }
             // Adding newline after each set of numbers
        }
        cout << endl;
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