#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
 
//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;
 
void answertoProb()
{
    ll n,k;
    cin>>n>>k;
    vector<int> a(n*k);
   for (int i=0;i<n*k;i++){
        cin >> a[i];
    }
    ll ans=0;
    int i=n*k;
    while(k--){
        i=i-(n/2 +1);
        ans+=a[i];
    }
    cout<<ans<<endl;
 
 
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