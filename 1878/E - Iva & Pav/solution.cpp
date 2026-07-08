#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        const int BITS = 31;
        vector<vector<int>> nxt(BITS, vector<int>(n + 1, n));
        
        for (int bit = 0; bit < BITS; bit++) {
            int next_zero = n;
            for (int i = n - 1; i >= 0; i--) {
                if (!(a[i] >> bit & 1)) {
                    next_zero = i;
                }
                nxt[bit][i] = next_zero;
            }
        }
        
        int q;
        cin >> q;
        vector<int> res;
        res.reserve(q);
        
        while (q--) {
            int l, k;
            cin >> l >> k;
            l--;
            
            if (a[l] < k) {
                res.push_back(-1);
                continue;
            }
            
            int left = l, right = n - 1;
            int answer = -1;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                
                int and_val = 0;
                for (int bit = 0; bit < BITS; bit++) {
                    if (nxt[bit][l] > mid) {
                        and_val |= (1 << bit);
                    }
                }
                
                if (and_val >= k) {
                    answer = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            
            res.push_back(answer == -1 ? -1 : answer + 1);
        }
        
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << (i + 1 < res.size() ? " " : "
");
        }
        
    }
    return 0;
}