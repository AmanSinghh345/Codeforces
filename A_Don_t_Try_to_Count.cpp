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
    ll n,m;
    cin>>n>>m;
    string x ;
    string s;
    cin>>x>>s;
    ll cnt=6,f=0,ans=0;
    while(cnt--){
        if(x.find(s)!=string::npos){
            f=1;
            break;
        }
        ans++;
        x+=x;
    }
    if(f==1) cout<<ans<<endl;
    else cout<<-1<<endl;
    
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