#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> b(2 * n);
    
    for (int i = 0; i < 2 * n; i++) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end()); // Sort the array
    int total_sum = accumulate(b.begin(), b.end(), 0LL); // Compute total sum
    
    // Assume last element (largest) was removed
    int largest = b.back();
    int target_sum = total_sum - largest;
    
    // Check if there exists an element in b that makes the sum valid
    for (int i = 0; i < 2 * n; i++) {
        if (b[i] == target_sum / 2 && target_sum % 2 == 0) {
            b.erase(b.begin() + i);
            b.push_back(largest);
            for (int num : b) cout << num << " ";
            cout << "\n";
            return;
        }
    }
    
    // If above case fails, check by assuming second largest is removed
    int second_largest = b[2 * n - 2];
    target_sum = total_sum - second_largest;
    
    if (target_sum % 2 == 0 && target_sum / 2 == largest) {
        b.pop_back(); // Remove the last element
        for (int num : b) cout << num << " ";
        cout << second_largest << "\n";
        return;
    }
    
    // If no valid sequence found (should never happen as per problem constraints)
    cout << "-1\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
