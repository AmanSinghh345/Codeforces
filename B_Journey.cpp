#include <iostream>
#include <vector>
using namespace std;

void solveMonocarpHiking() {
    int t;
    cin >> t;  // Number of test cases
    vector<int> results;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle_sum = a + b + c;

        if (n <= cycle_sum) {
            // Simulate the first cycle
            if (n <= a) {
                results.push_back(1);
            } else if (n <= a + b) {
                results.push_back(2);
            } else {
                results.push_back(3);
            }
        } else {
            long long full_cycles = n / cycle_sum;
            long long distance_covered = full_cycles * cycle_sum;
            long long remaining_distance = n - distance_covered;

            if (remaining_distance == 0) {

                results.push_back(full_cycles * 3);
            } else {
            
                if (remaining_distance <= a) {
                    results.push_back(full_cycles * 3 + 1);
                } else if (remaining_distance <= a + b) {
                    results.push_back(full_cycles * 3 + 2);
                } else {
                    results.push_back(full_cycles * 3 + 3);
                }
            }
        }
    }

    // Output all results
    for (int res : results) {
        cout << res << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solveMonocarpHiking();

    return 0;
}
