#include <bits/stdc++.h>
using namespace std;
 
class SegTree{
public:
    vector<long long> tree;
    vector<long long> lazy;
    vector<int> arr;
 
    SegTree(vector<int> a){
        arr = a;
        int n = arr.size();
        tree.resize(4*n);
        lazy.resize(4*n, -1);
        build(0, 0, n-1);
    }
 
    void build(int index, int start, int end){
        if(start == end){
            tree[index] = arr[start];
            return;
        }
        int mid = (start+end)/2;
        int leftChild = 2*index+1;
        int rightChild = 2*index+2;
 
        build(leftChild, start, mid);
        build(rightChild, mid+1, end);
 
        tree[index] = tree[leftChild] + tree[rightChild];
    }
 
    void pushdown(int index, int start, int end){
        if(lazy[index] != -1){
            int mid = (start+end)/2;
            int leftChild = 2*index+1;
            int rightChild = 2*index+2;
 
            tree[leftChild] = lazy[index] * (mid - start + 1);
            lazy[leftChild] = lazy[index];
 
            tree[rightChild] = lazy[index] * (end - mid);
            lazy[rightChild] = lazy[index];
 
            lazy[index] = -1;
        }
    }
 
    void point_update(int index, int start, int end, int pos, int value){
        if(start == end){
            tree[index] = value;
            arr[start] = value;
            return;
        }
        pushdown(index, start, end);
 
        int mid = (start+end)/2;
        int leftChild = 2*index+1;
        int rightChild = 2*index+2;
 
        if(pos <= mid) point_update(leftChild, start, mid, pos, value);
        else point_update(rightChild, mid+1, end, pos, value);
 
        tree[index] = tree[leftChild] + tree[rightChild];
    }
 
    void range_update(int index, int start, int end, int l, int r, long long val){
        if(r < start || end < l) return;
 
        if(l <= start && end <= r){
            tree[index] = val * (end - start + 1);
            lazy[index] = val;
            return;
        }
        pushdown(index, start, end);
 
        int mid = (start+end)/2;
        int leftChild = 2*index+1;
        int rightChild = 2*index+2;
 
        range_update(leftChild, start, mid, l, r, val);
        range_update(rightChild, mid+1, end, l, r, val);
 
        tree[index] = tree[leftChild] + tree[rightChild];
    }
 
    long long query(int index, int start, int end, int l, int r){
        if(r < start || end < l) return 0;
        if(l <= start && end <= r) return tree[index];
 
        if(start == end) return tree[index];
        pushdown(index, start, end);
 
        int mid = (start+end)/2;
        int leftChild = 2*index+1;
        int rightChild = 2*index+2;
 
        long long a = query(leftChild, start, mid, l, r);
        long long b = query(rightChild, mid+1, end, l, r);
 
        return a + b;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
 
    SegTree seg(a);
 
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int x, y;
            cin >> x >> y;
            x--;
            seg.point_update(0, 0, n-1, x, y);
        }
        else{
            int val;
            cin >> val;
            seg.range_update(0, 0, n-1, 0, n-1, val);
        }
        long long currSum = seg.query(0, 0, n-1, 0, n-1);
        cout << currSum << "
";
    }
    return 0;
}