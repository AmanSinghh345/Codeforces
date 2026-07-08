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
    int n=s.size();
    int cnt0=0,cnt1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    int ans=n;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && cnt1!=0){
            cnt1--;
            ans--;
        }
       
       else if(s[i]=='1' && cnt0!=0){
            cnt0--;
            ans--;
        }
        else {
            cout<<ans<<endl;
            return;
        }
    }
    cout<<ans<<endl;
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