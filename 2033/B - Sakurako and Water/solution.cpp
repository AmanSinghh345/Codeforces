#include <bits/stdc++.h>
using namespace std;
 
// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
 
// Typedefs
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;
 
int answertoProb() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    
    // Input the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int cnt = 0;
    int mini = INT_MAX;
 
    // Process the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] < 0) {
                mini = arr[i][j];
                int p = i, q = j;
                while(p < n && q < n) {
                    mini = min(mini, arr[p][q]);
                    if(arr[p][q]<0)
                    arr[p][q] = 0;
                    
                    p++;
                    q++;
                }
                cnt += abs(mini);
            }
        }
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