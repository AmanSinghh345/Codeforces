#include <bits/stdc++.h>
using namespace std;

// Speed
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

void answertoProb() {
    string ab;
    cin >> ab;
    int n = ab.size();
    string a;
    string b;
    int j = 0;

    // Building string 'a' from the prefix that can have '0'
    for (int i = 0; i < n; i++) {
        if (ab[i] == '0' || i == 0) {
            a += ab[i];
        } else {
            j = i;
            break;
        }
    }

    // Building string 'b' from the remaining part
    for (int i = j; i < n; i++) {
        b += ab[i];
    }

    // Convert the strings 'a' and 'b' to long long
    long long A = stoll(a);
    long long B = stoll(b);

    // Compare and print the result
    if (B > A) {
        cout << A << " " << B << endl;
    } else {
        cout << -1 << endl;
    }
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
