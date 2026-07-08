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
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> atemp;
    for(int i=0;i<n;i++) cin>>a[i];
    int x=0;
    for(int i=0;i<n;i++){
        x^=a[i];
    }
    if(x==0) cout<<0<<endl;
    else {
        if(n%2==1) cout<<x<<endl;
        else cout<<-1<<endl;
        return;
    }
 
 
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