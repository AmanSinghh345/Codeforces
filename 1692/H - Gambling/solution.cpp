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
        if (b & 1) res = (res * a);
        a = (a * a);
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a) {
    return modpow(a, MOD - 2);
}
const long long INF=1e18;
//Maximum Subarray Sum Segment Tree or Kadane Segement Tree
class SegmentTree{
    struct node{
        long long prefix;
        long long suffix;
        long long val;
        long long sum;
    };
    public:
        int n;
        long long neutral;
        vector<node> tree;
        SegmentTree(int n,long long assign){
            this->n=n;
            neutral=assign;
            tree.resize(4*n);
            for(int i=0;i<4*n;i++) {
                tree[i]={0,0,0,0};
            }
            build(0,0,n-1);
        }
        node merge(node a,node b){
            node c;
            c.prefix=max(a.prefix,a.sum+b.prefix);
            c.suffix=max(a.suffix+b.sum,b.suffix);
            c.val=max({a.val,b.val,a.suffix+b.prefix});
            c.sum=a.sum+b.sum;
            return c;
        }
        void build(int index,int start,int end){
            if(start==end){
                tree[index].prefix=neutral;
                tree[index].suffix=neutral;
                tree[index].val=neutral;
                tree[index].sum=neutral;
                return ;
            }
            int mid=(start+end)/2;
            int leftChild=2*index+1;
            int rightChild=2*index+2;
 
            build(leftChild,start,mid);
            build(rightChild,mid+1,end);
 
            tree[index]=merge(tree[leftChild],tree[rightChild]);
        }
        
        node query(int index,int start,int end,int l,int r){
            if(r<start || end<l) return {-INF,-INF,-INF,0};
            if(l<=start && end<=r) return tree[index];
 
            int mid=(start+end)/2;
            int leftChild=2*index+1;
            int rightChild=2*index+2;
 
            node a=query(leftChild,start,mid,l,r);
            node b=query(rightChild,mid+1,end,l,r);
 
            return merge(a,b);    
        }
 
        void update(int index,int start,int end,int pos,long long value){
            if(start==end){
                tree[index].prefix=value;
                tree[index].suffix=value;
                tree[index].val=value;
                tree[index].sum=value;
                return ;
            }
 
            int mid=(start+end)/2;
            int leftChild=2*index+1;
            int rightChild=2*index+2;
            if(pos<=mid) update(leftChild,start,mid,pos,value);
            else update(rightChild,mid+1,end,pos,value);
            tree[index]=merge(tree[leftChild],tree[rightChild]);
        }
};
 
 
void solve() {
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[a[i]].push_back(i);
    }
    SegmentTree seg(n,-1);
 
    int ans=-1;
    long long mx=0;
    for(auto iii:mp){
         
        int key=iii.first;
        auto v=iii.second;
        //add
        for(auto it :v)
            seg.update(0,0,n-1,it,1);
        //maximum subbarray sum
        if(mx<seg.query(0,0,n-1,0,n-1).val){
            mx=seg.query(0,0,n-1,0,n-1).val;
            ans=key;
        }  
        //remove
        for(auto it : v)
            seg.update(0,0,n-1,it,-1);
 
    }
    int l,r;
    int ansL,ansR;
    long long maxVal=0;
    long long currVal=0;
 
    for(int i=0;i<n;i++){
        int del;
        if(a[i]==ans){
            del=1;
        }
        else del=-1;
 
        if(currVal+del>del){
            currVal=currVal+del;
            r=i;
        }
        else{
            currVal=del;
            l=i;
            r=i;
        }
        if(currVal>maxVal){
            maxVal=currVal;
            ansL=l;
            ansR=r;
        }
    }
 
    cout<<ans<<" "<<ansL+1<<" "<<ansR+1<<'
';
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