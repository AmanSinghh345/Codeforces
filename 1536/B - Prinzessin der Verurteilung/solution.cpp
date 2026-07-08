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
    vector<int> freq(26,0);
    for(int i=0;i<n;i++) {
        freq[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(freq[i]==0) {
            cout<<char('a'+ i)<<"
";
            return;
        }
    }
    set<string> st;
    for(int i=0;i+1<n;i++){
        st.insert(s.substr(i,2));
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            string str="";
            str+=i;
            str+=j;
            if(st.find(str)==st.end()){
                cout<<str<<"
";
                return;
            }
        }
    }
    for(int i=0;i+2<n;i++){
        st.insert(s.substr(i,3));
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
                string str="";
                str+=i;
                str+=j;
                str+=k;
                if(st.find(str)==st.end()){
                    cout<<str<<"
";
                    return;
                }
            }
        }
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