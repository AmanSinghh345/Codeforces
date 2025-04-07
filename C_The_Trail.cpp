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
     string s;
     cin>>s;
     ll L=n+m-1;
     vector<pair<ll,ll>> path;
     ll row=0,col=0;
     path.push_back({row,col});
     for(auto ch:s){
        if(ch=='D') row++;
        else col++;
        path.push_back({row,col});
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