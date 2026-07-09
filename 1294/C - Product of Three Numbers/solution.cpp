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
    long long  n;
    cin>>n;
    map<long long,long long > divisors;
    vector<long long > a;
    for(long long  i=2;i*i<=n;i++){
        if(n%i==0){
            divisors[i]=1;
            a.push_back(i);
            if(n/i!=i){
                a.push_back(n/i);
                divisors[n/i]=1;
            }
        }
    }
    sort(a.begin(),a.end());
 
    long long  N=a.size();
    bool found=false;
    int l=0,r=1;
    while(r<N){
        long long  val=(n/(a[l]*a[r]));
        if((val!=a[l] && val!=a[r]) &&( divisors[val]==1)){
            cout<<"YES"<<endl;
            cout<<a[l]<<" "<<a[r]<<" "<<val<<'
';
            return;
        }
        l++;
        r++;
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