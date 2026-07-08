#include <bits/stdc++.h>
using namespace std;
 
// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
// Macros
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j - 1; i >= 0; i--)
#define all(x) x.begin(), x.end()
 
// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int, int> mii;
 
void answertoProb()
{
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> ans;
    ll sum1=0;
    ll sum2=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        sum2+=(a[i]+x-1)/x;
        sum1+=a[i];
    }
    cout<<(sum1+(x-1))/x<<" "<<sum2<<endl;
    
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        answertoProb();
    }
    return 0;
}