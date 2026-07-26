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
    string s;
    cin>>s;
    long long  posi=0;
    long long  neg=0;
    for(char c:s){
        if(c=='+') posi++;
        else neg++;
    }
    int q;
    cin>>q;
 
 
    for(int i=0;i<q;i++){
        long long  l,r;
        cin>>l>>r;
      
       if(posi==neg) {
        cout<<"YES"<<endl;
        continue;
       }
       if(posi!=neg && l==r){
        cout<<"NO"<<endl;
        continue;
       }
        bool found=false;
        if(r!=l) {
        long long  val=((posi-neg)*r)/(r-l);
        
        if((val>=-neg and val<=posi) && ((posi-neg)*r) %(r-l)==0)  found=true;
}
        if(found){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
 
    }
 
}
 
int main() {
    fastio();
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}