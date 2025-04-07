#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

// Macros
#define rep(i,j) for(int i=0; i<j; i++)
#define rrep(i,j) for(int i=j-1; i>=0; i--)
#define all(x) x.begin(), x.end()

// Typedefs
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;

int answertoProb() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Swap adjacent equal elements
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            swap(arr[i], arr[n - i - 1]);
        }
    }

    // // Additional swap logic
    // for (int i = 0; i < n - 1; i++) {
    //     if (arr[i] == arr[i + 1]) {
    //         if ((i + 2 < n) && (arr[i] != arr[n - i - 2])) {
    //             swap(arr[i], arr[n - i - 2]);
    //         } else if ((i - 1 >= 0) && (arr[i] != arr[i - 1])) {
    //             swap(arr[i], arr[i - 1]);
    //         }
    //     }
    // }

    // Count adjacent equal elements
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) cnt++;
    }

    return cnt;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        cout << answertoProb() << endl;
    }
    return 0;
}
