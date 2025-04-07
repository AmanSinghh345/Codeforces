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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d=k-1;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) cnt++;
        if(a[i]%k==0) d=0;
        else d=min(d,k-a[i]%k);
    }
    if(k!=4) cout<<d<<"\n";
    else{
        if(cnt>=2) cout<<0<<"\n";
        else if(cnt==1) cout<<min(d,1)<<"\n";
        else cout<<min(2,d)<<"\n";
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