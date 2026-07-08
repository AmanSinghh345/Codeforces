#include <iostream>
#include <vector>
using namespace std;
 
vector<int> generate_permutation(int n) {
    if (n % 2 == 0) {
        return {-1};
    }
 
    vector<int> permutation(n);
    for (int i = 0; i < n; i++) {
        permutation[i] = i + 1;
    }
 
    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        swap(permutation[i], permutation[n - i - 1]);
    }
 
    return permutation;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> result = generate_permutation(n);
        if (result.size() == 1 && result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
 
    return 0;
}