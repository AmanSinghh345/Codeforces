#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define endl '
'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
 
using vi = vector<int>;
using vl = vector<ll>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
 
const ll MOD = 1e9 + 7;
 
ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a) {
    return modpow(a, MOD - 2);
}
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int > closeestNotFriends(n,n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        if(v>u)
        closeestNotFriends[u]=min(closeestNotFriends[u],v);
        if(u>v)
        closeestNotFriends[v]=min(closeestNotFriends[v],u);
    }
 
    for(int i=n-2;i>=0;i--){
        closeestNotFriends[i]=min(closeestNotFriends[i],closeestNotFriends[i+1]);
    }
    long long cnt=0;
    for(int r=0;r<n;r++){
        long long len=(closeestNotFriends[r]-r);
        // cout<<"len "<<len<<endl;
        cnt+=len;
    }
    cout<<cnt<<endl;
    return;
}
 
int main() {
    fastio();
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}