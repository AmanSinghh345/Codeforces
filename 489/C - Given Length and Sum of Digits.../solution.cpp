#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m, s;
    cin >> m >> s;
 
    // Impossible cases
    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1";
        return 0;
    }
 
    // Smallest number
    int sum = s;
    string smallest = "";
    for (int i = 0; i < m; i++) {
        for (int d = 0; d <= 9; d++) {
            // first digit cannot be 0 if m > 1
            if (i == 0 && d == 0 && m > 1) continue;
 
            // check if remaining sum possible
            int rem = sum - d;
            if (rem >= 0 && rem <= 9 * (m - i - 1)) {
                smallest += char('0' + d);
                sum -= d;
                break;
            }
        }
    }
 
    // Largest number
    sum = s;
    string largest = "";
    for (int i = 0; i < m; i++) {
        for (int d = 9; d >= 0; d--) {
            if (i == 0 && d == 0 && m > 1) continue;
            int rem = sum - d;
            if (rem >= 0 && rem <= 9 * (m - i - 1)) {
                largest += char('0' + d);
                sum -= d;
                break;
            }
        }
    }
 
    cout << smallest << " " << largest;
}