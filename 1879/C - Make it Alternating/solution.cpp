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
 
const ll MOD =998244353;
 
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
 
long long getFactorial(int n) {
    if (n <= 1) {
        return 1; // Base case: 0! and 1! are equal to 1
    }
    return (n * getFactorial(n - 1))%MOD; // Recursive call
};
void solve() {
    string s;
    cin>>s;
 
    long long remove=0;
    long long ways=1;
    
    char prev=s[0];
    for(int i=1;i<(int)s.size();){
        if(s[i]!=prev){
            prev=s[i];
            i++;
        }
        else{
            int  cnt=1;
            while(s[i]==prev){
                cnt++;
                i++;
            }
            remove+=(cnt-1);
            
            ways=(ways*cnt)%MOD;
        }
    }
    ways=(ways*getFactorial(remove))%MOD;
    cout<<remove<<" "<<ways<<"
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