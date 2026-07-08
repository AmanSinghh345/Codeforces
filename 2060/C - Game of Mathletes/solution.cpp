#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef vector<int> vi;
 
void answertoProb() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    unordered_map<int, int> freq;
    int cnt = 0;
 
    for (int num : a) {
        int complement = k - num;
        if (freq[complement] > 0) {
            cnt++;
            freq[complement]--; // Use the complement
        } else {
            freq[num]++; // Store current number
        }
    }
 
    cout << cnt << endl;
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