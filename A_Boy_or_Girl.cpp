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
    set<char> stt;
    for(int i=0;i<s.size();i++) stt.insert(s[i]);
    if(stt.size()%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;

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