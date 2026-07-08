#include <bits/stdc++.h>
using namespace std;
 
int query(int x) {
    cout << "? " << x << endl;
    int c;
    cin >> c;
    return c;
}
 
int main() {
    int n;
    cin >> n;
 
    int l = 1, h = n;
    while (l <= h) {
        int mid = (l + h) / 2;
 
        int left = (mid == 1) ? 1e9 : query(mid - 1);
        int center = query(mid);
        int right = (mid == n) ? 1e9 : query(mid + 1);
 
        if (center < left && center < right) {
            cout << "! " << mid << endl;
            return 0;
        }
 
        // Move towards the smaller neighbor
        if (left < center) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
 
    // Should never reach here
    cout << "! -1" << endl;
    return 0;
}