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
    long long k,x;
    cin>>k>>x;
    if(x>=(k*k)) {
        cout<<2*k-1<<endl;
        return;
    }
    long long cnt=0;
    long long have=0;
    long long midVal=(k*(k+1))/2;
    if(x>midVal){
        cnt+=k;
        long long req=x-midVal;
        long long l=1,h=k-1;
        long long ans=k-1;
        long long Total=((k-1)*k)/2;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long val=(mid*(2*k-mid-1))/2;
            if(val<req){
                l=mid+1;
            }
 
            else{
                ans=mid;
                h=mid-1;
            }
        }
        cout<<cnt+ans<<"
";
        return;
    }
    else{
        long long  l=1,h=k;
        long long mid=l+(h-l)/2;
        long long ans=k;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long val=(mid*(mid+1))/2;
            if(val<x){
                l=mid+1;
            }
            else {
                ans=mid;
                h=mid-1;
            }
        }
        cout<<ans<<"
";
    }
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