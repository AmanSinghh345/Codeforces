#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x0, n;
        cin >> x0 >> n;
 
        long long d;
        switch (n % 4) {
            case 0: d = 0; break;
            case 1: d = n; break;
            case 2: d = -1; break;
            case 3: d = -n - 1; break;
        }
 
        if (x0 % 2 == 0)
            cout << x0 - d << endl;
        else
            cout << x0 + d << endl;
    }
 
    return 0;
}