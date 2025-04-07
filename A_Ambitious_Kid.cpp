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

int32_t main()
{
    fastio();
    int n;
    cin>>n;
    int mini=INT_MAX;
    int temp;
    while(n--){
        cin>>temp;
        mini=min(mini,abs(temp));
    }
    cout<<mini<<endl;
    return 0;
}