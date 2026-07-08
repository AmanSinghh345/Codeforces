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
    string s;
    cin>>s;
    vector<int> a;
    for(int i=0;i<s.size();i+=2) {
        a.push_back(s[i]);
    }
    sort(a.begin(),a.end());
    string ans="";
    int ind=0;
    int i=0;
    while(ind<s.size()){
        ans+=a[i];
        ans+="+";
        i++;
        ind+=2;
 
    }
    ans.erase(ans.size()-1);
    cout<<ans<<endl;
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