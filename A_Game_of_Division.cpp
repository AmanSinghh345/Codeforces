#include <bits/stdc++.h>
using namespace std;

// Speed optimization
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void answertoProb()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // If k == 1, every difference is divisible by 1, so it's always "NO"
    if (k == 1) {
        cout << "NO" << endl;
        return;
    }
    
    // Check if there are at least two distinct elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If the absolute difference is not divisible by k, first player can win
            if (abs(arr[i] - arr[j]) % k != 0) {
                cout << "YES" << endl;
                cout << i + 1 << endl;  // Output the 1-based index
                return;
            }
        }
    }
    
    // If no valid pair found
    cout << "NO" << endl;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) {
        answertoProb();
    }
    return 0;
}
