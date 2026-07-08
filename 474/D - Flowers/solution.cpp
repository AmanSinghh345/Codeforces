#include <bits/stdc++.h>
using namespace std;
 
const int md = 1000000007;
const int N = 100005; 
 
int f[N];
long long s[N]; 
 
int main() {
    int t, k;
    scanf("%d %d", &t, &k);
 
    f[0] = 1;
    for (int i = 1; i < N; i++) {
        f[i] = f[i - 1];
        if (i >= k) {
            f[i] += f[i - k];
            if (f[i] >= md) f[i] -= md;
        }
    }
 
    s[0] = 0;
    for (int i = 1; i < N; i++) {
        s[i] = s[i - 1] + f[i];
        if (s[i] >= md) s[i] -= md;
    }
 
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        long long ans = (s[b] - s[a - 1] + md) % md;
        printf("%lld
", ans);
    }
 
    return 0;
}