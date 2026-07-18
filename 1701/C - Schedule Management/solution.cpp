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
bool canComplete(int mid,const vector<int>& worker){
    int n=worker.size();
    long long  taskToTransfer=0;
    long long  TransferCapacity=0;
    for(int x:worker){
        if(x<=mid){
            TransferCapacity+=(mid-x)/2;
        }
        else taskToTransfer+=(x-mid);
    }
    if(TransferCapacity>=taskToTransfer) return true;
    return false;
}
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        a[i]=x-1;
    }
    vector<int> worker(n,0);
    for(int i=0;i<m;i++){
        worker[a[i]]++;
    }
    
    int l=1,h=2*m;
    int ans=2*m;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(canComplete(mid,worker)){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<"
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