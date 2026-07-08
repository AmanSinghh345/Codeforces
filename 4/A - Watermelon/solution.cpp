#include <bits/stdc++.h>
using namespace std;
 
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
bool even(int n) {
    return n % 2 == 0;
}
//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;
 
void answertoProb()
{
    int n;
    cin>>n;
    if(n%2==0 and n!=2) cout<<"YES"<<"
";
    else cout<<"NO"<<"
";
    return;
}
 
int32_t main()
{
    fastio();
    int t=1;
    //cin >> t;
    while (t--)
    {
        answertoProb();
    }
    return 0;
}