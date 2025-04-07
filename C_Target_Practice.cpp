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

void answertoProb() {
    vector<vector<char>> arr(10, vector<char>(10));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (arr[i][j] == 'X') {
                if (i == 0 || j == 0 || i == 9 || j == 9) {
                    sum += 1;
                } else if ((i == 1 || i == 8) && (j >= 1 && j <= 8)) {
                    sum += 2;
                } else if ((j == 1 || j == 8) && (i >= 1 && i <= 8)) {
                    sum += 2;
                } else if (((i == 2 || i == 7) && (j >= 2 && j <= 7)) || 
                           ((j == 2 || j == 7) && (i >= 2 && i <= 7))) {
                    sum += 3;
                } else if (((i == 3 || i == 6) && (j >= 3 && j <= 6)) || 
                           ((j == 3 || j == 6) && (i >= 3 && i <= 6))) {
                    sum += 4;
                } else {
                    sum += 5;
                }
            }
        }
    }
    cout << sum << endl;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        answertoProb();
    }
    return 0;
}
