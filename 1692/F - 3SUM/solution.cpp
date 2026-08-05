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
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int ld=a[i]%10;
        if(mp[ld]<3) mp[ld]++;
    }
    vector<int> arr;
    for(auto it : mp){
        for(int i=0;i<it.second;i++){
            arr.push_back(it.first);
        }
    }
    mp.clear();
    for(int i=0;i<arr.size()-2;i++){
        for(int j=i+1;j<arr.size()-1;j++){
             for(int k=j+1;k<arr.size();k++){
                if((arr[i]+arr[j]+arr[k])%10==3){
                    cout<<"YES"<<endl;
                    return;
                }
             }
        }
    }
    cout<<"NO"<<endl;
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