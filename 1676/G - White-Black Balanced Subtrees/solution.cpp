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
pair<int,int> find(int node,vector<vector<int>>& child,string& s){
 
        if(child[node].size()==0){ //no children
            int val=(s[node-1]=='W')?-1:1;
            int cnt=0;
            return {val,cnt};
        }
        int val=0,cnt=0;
        for(auto it : child[node]){
            pair<int,int> get=find(it,child,s);
            val+=get.first;
            cnt+=get.second;
        }
        int del=(s[node-1]=='W')?-1:1;
        val+=del;
        if(val==0) cnt++;
        return {val,cnt};
 
    //   else  if(child[node].size()==2){
    //         int leftChild=child[node][0];
    //         int rightChild=child[node][1];
    //         pair<int,int> getLeft=find(leftChild,child,s);
    //         pair<int,int> getRight=find(rightChild,child,s);
 
    //         int val=getLeft.first + getRight.first;
    //         int cnt=getLeft.second+getRight.second;
            
    //         int del=(s[node-1]=='W')?-1:1;
    //         val+=del;
    //         if(val==0) cnt++;
    //         return {val,cnt};
    //     }
 
    //     else{
    //          int leftChild=child[node][0]; 
    //              pair<int,int> getLeft=find(leftChild,child,s);
    //               int val=getLeft.first ;
    //         int cnt=getLeft.second;
               
    //         int del=(s[node-1]=='W')?-1:1;
    //         val+=del;
    //         if(val==0) cnt++;
    //         return {val,cnt};
    //     }
    
}
void solve() {
    int n;
    cin>>n;
  
    vector<vector<int>> child(n+1);
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        child[x].push_back(i);
    } 
 
    // for(auto it : child){
    //     for (int x : it) cout<<x<<" ";
    //     cout<<endl;
 
    // }
 
    string s;
    cin>>s;
    int val,cnt=0;
    pair<int,int> get=find(1,child,s);
    val=get.first;
    cnt=get.second;
    cout<<cnt<<'
';
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