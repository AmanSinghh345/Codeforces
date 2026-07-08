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
    int n;
    cin>>n;
    map<int,int> mpp;
    for(int i=1;i<=n;++i){
         int x;
         cin>>x;
         mpp[x]++;
    }
    if(mpp.size()>=3) puts("no");
    else{
        if(abs(mpp.begin()->second-mpp.rbegin()->second)<=1)
        puts("yes");
        else 
        puts("no");
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