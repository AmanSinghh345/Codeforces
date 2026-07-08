#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef vector<int> vi;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq1,pq2;
    int val;
    string s;
    for(int i=0;i<n;i++){
        cin>>val>>s;
        if(s=="USB") pq1.push(val);
        else pq2.push(val);
    }
    ll ans=0;
    while(a>0 and !pq1.empty()){
        ans+=pq1.top();
        pq1.pop();
        a--;
    }
    while(b>0 and !pq2.empty()){
        ans+=pq2.top();
        pq2.pop();
        b--;
    }
    while(!pq1.empty()){
        pq2.push(pq1.top());
        pq1.pop();
    }
    while(c>0 and !pq2.empty()){
        ans+=pq2.top();
        pq2.pop();
        c--;
    }
    cout<<n-pq2.size()<<" "<<ans<<"
";
    return;
   
}
 
int32_t main() {
    fastio();
 
    // Optional: Uncomment if using file input
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
    int t = 1;
    //cin >> t;
    while (t--) solve();
 
    return 0;
}