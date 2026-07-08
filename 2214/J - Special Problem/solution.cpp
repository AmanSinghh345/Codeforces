#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    // Use getline because the input has spaces
    getline(cin, s);
 
    if (s == "Are you a verified human?") {
        cout << "Yes, I can attest to my status as a thoroughly validated, carbon-based biological entity.
";
    } else {
        cout << "Yes
"; // Literally anything works here
    }
 
    return 0;
}