#include <bits/stdc++.h>
using namespace std;
 
// ask function asks for sum from index l to h (inclusive)
int ask(int size, int l, int h) {
    cout << "? " << size << " ";
    for (int i = l; i <= h; i++) {
        cout << i + 1 << " "; 
    }
    cout << endl;
    int c;
    cin >> c;
    return c;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        // Prefix sum array
        vector<int> preArr(n);
        preArr[0] = a[0];
        for (int i = 1; i < n; i++) {
            preArr[i] = preArr[i - 1] + a[i];
        }
 
        int l = 0, h = n - 1;
 
        while (l < h) {
            int mid = l + (h - l) / 2;
            int size = mid - l + 1;
            int sum = ask(size, l, mid);
            int actual = preArr[mid] - (l > 0 ? preArr[l - 1] : 0);
 
            if (sum == actual) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }
 
        // Output the 1-based index of the tampered element
        cout << "! " << l + 1 << endl;
    }
    return 0;
}