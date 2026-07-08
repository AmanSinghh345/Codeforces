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
    string s;
    cin>>s;
    int n=s.size();
    char prev=s[0];
 
    for(int i=1;i<n;){
        if(prev!=s[i]){
            prev=s[i];
            i++;
            continue;
        }
        else {
            if(i+1<n && s[i]==s[i+1]){
                char nw=s[i]+1;
                if(nw>'z') nw='a';
                s[i]=nw;
                prev=s[i+1];
                i+=2;
                continue;
            }
            else if(i+1<n && s[i]!=s[i+1]){
                char nw=max(s[i],s[i+1])+1;
                if(nw>'z') nw='a';
                if(nw=='a' && (s[i]=='a' || s[i+1]=='a')) nw='b';
               
                s[i]=nw;
                prev=s[i+1];
                i+=2;
                continue;
            }
            else {
                i++;
            }
        }
    }
    if(n>1 && s[n-2]==s[n-1]){
        char nw=s[n-1]+1;
        if(nw>'z') nw='a';
        s[n-1]=nw;
    }
    cout<<s<<endl;
    return ;
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