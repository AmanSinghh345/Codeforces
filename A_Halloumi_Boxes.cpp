#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define vvi vector<vector<int>>
//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void answertoProb()
{    int n,k;
cin>>n>>k;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==1&& !is_sorted(arr.begin(),arr.end())){
        cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;
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