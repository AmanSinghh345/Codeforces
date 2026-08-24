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
vector<int> lpsgenerator(string & pat){
    int n=pat.size();
    vector<int> lps(n,0);
    int len=0;
    int i=1;
    while(i<n){
        if(pat[i]==pat[len]){
            lps[i]=len+1;
            len++;
            i++;
        }
        else {
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    vector<int> lps=lpsgenerator(s);
    int len=lps[n-1];
    while(len>0){
        bool found=false;
        for(int i=0;i<n-1;i++){
            if(lps[i]>=len){
                found=true;
                break;
            }
        }
        if(found){
            cout<<s.substr(0,len);
            return;
        }
        len=lps[len-1];
    }
   cout<<"Just a legend"<<endl;
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