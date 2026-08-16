#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
   
    vector<int> p = {4, 8, 15, 16, 23, 42};
    vector<int> ans(4);
 
 
    for (int i = 0; i < 4; ++i) {
        cout << "? " << i + 1 << " " << i + 2 << endl; 
        cin >> ans[i];
    }
 
 
    do {
        if (p[0] * p[1] == ans[0] &&
            p[1] * p[2] == ans[1] &&
            p[2] * p[3] == ans[2] &&
            p[3] * p[4] == ans[3]) {
            break;
        }
    } while (next_permutation(p.begin(), p.end()));
 
   
    cout << "!";
    for (int i = 0; i < 6; ++i) {
        cout << " " << p[i];
    }
    cout << endl;
 
    return 0;
}