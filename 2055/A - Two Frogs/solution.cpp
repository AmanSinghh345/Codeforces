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
    ll n,a,b;
    cin>>n>>a>>b;
    int loa,roa,lob,rob;
    if(b<a){
        loa=a-b;
        roa=n-a;
        lob=b;
        rob=loa;
        }
    if(b>a){
        lob=b-a;
        rob=n-b;
        loa=a;
        roa=lob;
    }
    if(loa==0 && roa==0){
        cout<<"NO"<<"
";
        return;
    }
    if(abs(b-a -1)%2!=0) {
        cout<<"YES"<<"
";
        return;
 
    }
    else {
        cout<<"NO"<<"
";
        return;
    }
    return;
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