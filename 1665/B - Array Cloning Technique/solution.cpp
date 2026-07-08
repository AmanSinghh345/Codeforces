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
    int x;
    int maxi=INT_MIN;
    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        cin>>x;
        mpp[x]++;
        maxi=max(maxi,mpp[x]);
    }
    if(maxi==n) cout<<0<<endl;
    else {
        int cnt=1;
        while(maxi<=n){
            if(2*maxi>=n){
                cnt+=(n-maxi);
                break;
            }
            cnt+=maxi;
            maxi=maxi*2;
            cnt++;
        }
        cout<<cnt<<endl;
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