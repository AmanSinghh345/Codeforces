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
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int m=(a[i]%x);
        mp[m]++;
    }
    int cnt=0;
    
    for(auto & it : mp){
        if(it.first==0) cnt++;
        else if(2*it.first==x) cnt++;
        else {
            if(2*it.first<x || mp.find(x-it.first)==mp.end()){
                int p=it.second;
                int q=mp[x-it.first];
                cnt+=1+max(0,(abs(p-q)-1));
            }
        }
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