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
    cin >> n;
    if(n<=10) {
        cout<<n<<endl;
        return;
    }
    string s=to_string(n);
    int digits=s.size();
    int num=s[0]-'0';
    int roundoff=pow(10,digits-1);
    roundoff=num*roundoff;
    int cnt=0;
    int tens=digits-1;
    int ans=num+(tens*9);
    cout<<ans<<endl;

    /*
    1-10 10
    10-100 9
    100-1000 9
    1000-10000 9
    10000 -100000 9

    
    */

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