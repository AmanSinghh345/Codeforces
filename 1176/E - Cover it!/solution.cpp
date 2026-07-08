#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<int> level(n + 1, -1);
    queue<int> q;
 
    // BFS from node 1
    level[1] = 0;
    q.push(1);
 
    vector<int> part[2]; // part[0] = even level, part[1] = odd level
    part[0].push_back(1);
 
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (level[v] == -1) {
                level[v] = level[u] ^ 1; // flip level
                part[level[v]].push_back(v);
                q.push(v);
            }
        }
    }
 
    // Pick the smaller set
    if (part[0].size() <= part[1].size()) {
        cout << part[0].size() << "
";
        for (int x : part[0]) cout << x << " ";
    } else {
        cout << part[1].size() << "
";
        for (int x : part[1]) cout << x << " ";
    }
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}