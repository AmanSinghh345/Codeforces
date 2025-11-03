#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> color(n + 1);
    for (int i = 1; i <= n; i++) cin >> color[i];

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Use map of sets: color -> set of neighbor colors
    vector<unordered_set<int>> neighborColors(100001);

    for (int u = 1; u <= n; u++) {
        int c1 = color[u];
        for (int v : adj[u]) {
            int c2 = color[v];
            if (c1 != c2) {
                neighborColors[c1].insert(c2);
                neighborColors[c2].insert(c1);
            }
        }
    }

    int ansColor = 0;
    int maxDiversity = -1;

    // Find color that exists in the graph
    unordered_set<int> presentColors(color.begin() + 1, color.end());

    for (int c : presentColors) {
        int sz = neighborColors[c].size();
        if (sz > maxDiversity || (sz == maxDiversity && c < ansColor)) {
            maxDiversity = sz;
            ansColor = c;
        }
    }

    cout << ansColor << "\n";
    return 0;
}
