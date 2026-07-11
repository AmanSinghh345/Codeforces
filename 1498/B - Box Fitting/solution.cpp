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
    int n,w;
    cin>>n>>w;
    vector<int> power(31,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int cntTrailingZero=__builtin_ctz(x);
        power[cntTrailingZero]++;
    }
 
    int remainingRectangle=n;
    int height=0;
    while(remainingRectangle>0){
        int remainingWidth=w;
        for(int j=30;j>=0;j--){
            int recWidth=(1<<j);
            int canTake=remainingWidth/recWidth;
            int take=min(power[j],canTake);
            power[j]-=take;
            remainingRectangle-=take;
            remainingWidth-=(recWidth*take);
        } 
       height++;
    }
    cout<<height<<endl;
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