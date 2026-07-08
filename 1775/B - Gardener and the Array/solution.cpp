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
    int n;
    cin>>n;
    vector<vector<int>> a;
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++){
        int sz;
        cin>>sz;
        vector<int> temp;
        for(int j=0;j<sz;j++){
            int x;
            cin>>x;
            umap[x]++;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    // cout<<umap[1]<<endl;
    for(auto it : a){
        bool flag=true;
        for(int x : it ){
            if(umap[x]<2) {
                // cout<<"x : "<<x<<endl;
                flag=false;
                break;
            }
        }
        // cout<<flag<<endl;
        if(flag) {
            cout<<"YES"<<"
";
            return ;
        }
    }
    cout<<"NO"<<"
";
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