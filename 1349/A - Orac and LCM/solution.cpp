#include <iostream>
#include <cstdio>
 
using namespace std;
typedef long long ll;
 
const int maxn = 100005;
 
int n;
ll a[maxn], pre[maxn], suf[maxn];
 
// Function to compute GCD
ll gcd(ll x, ll y) {
    return y == 0 ? x : gcd(y, x % y);
}
 
// Function to compute LCM
ll lcm(ll x, ll y) {
    return x / gcd(x, y) * y;
}
 
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
 
    // Compute prefix and suffix GCDs
    pre[1] = a[1];
    for(int i = 2; i <= n; i++)
        pre[i] = gcd(pre[i - 1], a[i]);
 
    suf[n] = a[n];
    for(int i = n - 1; i >= 1; i--)
        suf[i] = gcd(suf[i + 1], a[i]);
 
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll currentGCD;
        if(i == 1)
            currentGCD = suf[2];
        else if(i == n)
            currentGCD = pre[n - 1];
        else
            currentGCD = gcd(pre[i - 1], suf[i + 1]);
 
        // LCM of all GCDs
        if(ans == 0)
            ans = currentGCD;
        else
            ans = lcm(ans, currentGCD);
    }
 
    printf("%lld
", ans);
    return 0;
}