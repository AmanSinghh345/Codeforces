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
    vector<long long > nums(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    long long maxi1=nums[0];
    long long curr1=nums[0];
    for(int i=1;i<n-1;i++){
        curr1=max(nums[i],curr1+nums[i]);
        maxi1=max(maxi1,curr1);
    }
    long long maxi2=nums[1];
    long long curr2=nums[1];
    for(int i=2;i<n;i++){
        curr2=max(nums[i],curr2+nums[i]);
        maxi2=max(maxi2,curr2);
    } 
    long long maxi=max(maxi1,maxi2);
    if(sum>maxi) cout<<"YES"<<"
";
    else cout<<"NO"<<"
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