#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int max_strong_teams(int n, int x, vector<int>& skills) {
    sort(skills.rbegin(), skills.rend()); 
    int count = 0, members = 0;
    
    for (int skill : skills) {
        members++;
        if (skill * members >= x) {
            count++;
            members = 0; 
        }
    }
    return count;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> skills(n);
        for (int i = 0; i < n; i++) {
            cin >> skills[i];
        }
        cout << max_strong_teams(n, x, skills) << endl;
    }
    return 0;
}