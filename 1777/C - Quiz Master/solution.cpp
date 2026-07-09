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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<vector<int>> divisors(n);
    for(int i=0;i<n;i++){
        for(int d=1;d*d<=a[i];d++){
            if(a[i]%d==0){
                if(d<=m)
                divisors[i].push_back(d);
                
                if(a[i]/d!=d) {
                    if(a[i]/d<=m){
                    divisors[i].push_back(a[i]/d);
                    }
                }
            }
        }
    }
 
    // for(auto it : divisors){
    //     for(int x : it )  cout<<x<<" ";
    //     cout<<endl;
    // }
 
    vector<int> freq(m+1,0);
    int cnt=0;
    int l=0;
    int ans=INT_MAX;
    for(int r=0;r<n;r++){
        for(int x : divisors[r]){
            if(freq[x]==0) cnt++;
            freq[x]++;
        }
        while(cnt==m){
            ans=min(ans,a[r]-a[l]);
            for(int x : divisors[l]){
                freq[x]--;
                if(freq[x]==0) cnt--;
            }
            l++;
        }
    }
    // cout<<l<<endl;
    // cout<<ans<<endl;
    if(ans==INT_MAX) cout<<-1<<"
";
    else
    cout<<ans<<"
";
    return ;
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